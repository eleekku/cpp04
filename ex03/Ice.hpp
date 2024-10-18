#pragma once

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    private:
        std::string _type;
    public:
        Ice();
        virtual ~Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
        void use(ICharacter &target) override;
        AMateria* clone() const;
};