#pragma once

#include "Character.hpp"

Character::Character() : _name("default") {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string const & name) : _name(name) {
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
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (_inventory[i]) {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
}