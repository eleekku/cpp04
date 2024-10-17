#pragma once

#include "AMateria.hpp"

class MateriaSource {
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &other);

        void learnMateria(AMateria* m);
        AMateria* createMateria(const std::string& type);
};