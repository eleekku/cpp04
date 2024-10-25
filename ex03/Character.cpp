#include "Character.hpp"

Character::Character() : _name("default"), _head(nullptr) {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string const & name) : _name(name), _head(nullptr) {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(Character const & src) {
    *this = src;
}

Character & Character::operator=(Character const & src) {
    if (this != &src) {
        _name = src._name;
        for (int i = 0; i < 4; i++) {
            if (_inventory[i]) {
                delete _inventory[i];
                _inventory[i] = NULL;
            }
            if (src._inventory[i])
                _inventory[i] = src._inventory[i]->clone();
        }
    // Clear the existing linked list
    Node* current = _head;
    while (current) {
        Node* next = current->next;
        delete current->materia;
        delete current;
        current = next;
    }
    _head = nullptr;
    // Copy the linked list from src
    Node* srcCurrent = src._head;
    Node** destCurrent = &_head;
    while (srcCurrent) {
        *destCurrent = new Node();
        if (srcCurrent->materia)
            (*destCurrent)->materia = srcCurrent->materia->clone();
        else
            (*destCurrent)->materia = nullptr;
        (*destCurrent)->next = nullptr;
        srcCurrent = srcCurrent->next;
        destCurrent = &((*destCurrent)->next);
        }
    }
    return *this;
}

std::string const & Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    if (!m) {
        std::cout << this->getName() <<": There is nothing to equip" << std::endl;
        return ;
    }
    if (m->getowner()) {// If is already equiped
        std::cout << this->getName() << ": The material is equiped by someone else" << std::endl;
        return ;
    }
        // Check if the materia is already in the linked list
    Node* prev = nullptr;
    Node* current = _head;

    while (current) {
        if (current->materia == m) {
            // If we find the materia in the linked list, remove it
            if (prev == nullptr)
                _head = current->next;
            else
                prev->next = current->next;
            delete current;  // Free the Node, but not the materia
            break;
        }
        prev = current;
        current = current->next;
    }

    for (int i = 0; i < 4; i++) {
        if (!_inventory[i]) {
            _inventory[i] = m;
            _inventory[i]->setowner(true);
            return;
        }
    }
    delete m;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && _inventory[idx]) {
        Node* newNode = new Node();
        newNode->materia = _inventory[idx];
        newNode->materia->setowner(true);
        newNode->next = _head;
        _head = newNode;
        _inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && _inventory[idx])
        _inventory[idx]->use(target);
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i]) {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
    Node* current = _head;
    while (current) {
        Node* next = current->next;
        if (current->materia)
            delete current->materia;
        delete current;
        current = next;
    }
}