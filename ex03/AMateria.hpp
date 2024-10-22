#pragma once

#include "ICharacter.hpp"
class ICharacter;

class AMateria {
    protected:
        std::string _type;
    
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(AMateria const & src);
        virtual AMateria & operator=(AMateria const & src);

        std::string const & getType() const; // Returns the materia type

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;

};