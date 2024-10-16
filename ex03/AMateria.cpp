#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
    std::cout << "AMateria default constructor" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor" << std::endl;
}

AMateria::AMateria(const AMateria &other) : _type(other._type)
{
    std::cout << "AMateria copy constructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria assignment operator" << std::endl;
    if (this == &other)
        return (*this);
    _type = other._type;
    return (*this);
}

std::string AMateria::getType() const
{
    return (_type);
}

