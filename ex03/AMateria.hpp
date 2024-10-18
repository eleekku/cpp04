#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    
    public:
        AMateria();
        AMateria(const std::string &type);
        virtual ~AMateria();
        AMateria(const AMateria &other);
        AMateria &operator=(const AMateria &other);

        std::string getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target) = 0;
};