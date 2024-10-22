#pragma once

#include "mainh.hpp"
class AMateria;

class Cure : public AMateria {
    public:
        Cure();
        Cure(Cure const & src);
        Cure & operator=(Cure const & src);
        ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);
};