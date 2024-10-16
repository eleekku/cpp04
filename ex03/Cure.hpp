#pragma once

#include "AMateria.hpp"

class Cure
{
    private:
        std::string _type;
    public:
        Cure();
        virtual ~Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);
};