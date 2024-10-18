#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor" << std::endl;
    _materiaCount = 0;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor" << std::endl;
    // Clean up the array elements
    for (int i = 0; i < _materiaCount; i++)
    {
        delete _materia[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy constructor" << std::endl;
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource assignment operator" << std::endl;
    if (this != &other)
    {
        // Clean up existing materia
        for (int i = 0; i < _materiaCount; i++)
        {
            delete _materia[i];
        }

        // Copy materia from other
        _materiaCount = other._materiaCount;
        for (int i = 0; i < _materiaCount; i++)
        {
            _materia[i] = other._materia[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (_materiaCount < MAX_MATERIA)
    {
        _materia[_materiaCount] = m;
        _materiaCount++;
    }
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < _materiaCount; i++)
    {
        if (_materia[i]->getType() == type)
        {
            return _materia[i]->clone();
        }
    }
    return nullptr;
}

