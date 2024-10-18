#pragma once

#include "mainh.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(Cure const & src);
        Cure & operator=(Cure const & src);
        ~Cure();

        AMateria* clone() const override;
        void use(ICharacter& target);
};