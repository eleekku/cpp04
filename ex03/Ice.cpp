#include "Ice.hpp"

Ice::Ice() : _type("ice")
{
    std::cout << "Ice default constructor" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor" << std::endl;
}

Ice::Ice(const Ice &other)
{
    std::cout << "Ice copy constructor" << std::endl;
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice assignment operator" << std::endl;
    if (this == &other)
        return (*this);
    _type = other._type;
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
