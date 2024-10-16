#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    _type = other._type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this == &other)
        return (*this);
    _type = other._type;
    std::cout << "WrongCat assignation operator called" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow Meow" << std::endl;
}