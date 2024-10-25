#pragma once

#include "ICharacter.hpp"

class ICharacter;

struct Node {
    AMateria* materia;
    Node* next;
};

class Character : public ICharacter {
    private:
        std::string _name;
        AMateria* _inventory[4];
        Node* _head;

    public:
        Character();
        Character(std::string const & name);
        Character(Character const & src);
        Character & operator=(Character const & src);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};