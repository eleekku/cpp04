#pragma once

#include "AMateria.hpp"
#include <iostream>

class Ice
{
    private:
        std::string _type;
    public:
        Ice();
        virtual ~Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
};