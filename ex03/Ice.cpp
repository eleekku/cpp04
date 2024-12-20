#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & src)  {
    *this = src;
}


Ice & Ice::operator=(Ice const & src){
    if (this != &src)
        this->_type = src._type;
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

