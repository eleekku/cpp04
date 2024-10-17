#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy constructor" << std::endl;
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource assignment operator" << std::endl;
    if (this == &other)
        return (*this);
    _materia = other._materia;
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    _materia.push_back(m);
}


