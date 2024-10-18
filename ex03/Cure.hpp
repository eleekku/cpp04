#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        std::string _type;
    public:
        Cure();
        virtual ~Cure();
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);
        void use(ICharacter &target) override;

        AMateria* clone() const;
};