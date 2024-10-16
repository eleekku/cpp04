#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(const AMateria &other);
        AMateria &operator=(const AMateria &other);

        std::string getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);
};