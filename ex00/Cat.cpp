#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    this->_type = other._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}
