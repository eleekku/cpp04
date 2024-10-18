#pragma once

#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

    private:
        static const int MAX_MATERIA = 4;
        AMateria* _materia[MAX_MATERIA];
        int _materiaCount;

    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &other);

        void learnMateria(AMateria* m) override;
        AMateria* createMateria(const std::string& type) override;
};