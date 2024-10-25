#pragma once

#include <iostream>
class ICharacter;

class AMateria {
    protected:
        std::string _type;
        bool        _owner;
    
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(AMateria const & src);
        virtual AMateria & operator=(AMateria const & src);

        std::string const & getType() const; // Returns the materia type
        void    setowner(bool value);
        bool    getowner();

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;

};