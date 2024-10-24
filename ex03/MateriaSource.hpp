#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* _source[4];
        int _count;
    
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        MateriaSource & operator=(MateriaSource const & src);
        ~MateriaSource();

        void learnMateria(AMateria* m) override;
        AMateria* createMateria(std::string const & type) override;
};