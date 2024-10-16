#include "Cure.hpp"

Cure::Cure() : _type("cure")
{
    std::cout << "Cure default constructor" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor" << std::endl;
}

Cure::Cure(const Cure &other)
{
    std::cout << "Cure copy constructor" << std::endl;
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure assignment operator" << std::endl;
    if (this == &other)
        return (*this);
    _type = other._type;
    return (*this);
}
