#include "AMateria.hpp"

AMateria::AMateria () : _type("default") {}

AMateria::AMateria (std::string const & type) : _type(type) {}

AMateria::AMateria(AMateria const & src) {
    *this = src;
}

AMateria & AMateria::operator=(AMateria const & src) {
    if (this != &src)
        this->_type = src._type;
    return *this;
}

std::string const & AMateria::getType() const {
        return _type;
}

AMateria::~AMateria() {}