#include "AMateria.hpp"

AMateria::AMateria () : _type("default"), _owner(false) {}

AMateria::AMateria (std::string const & type) : _type(type), _owner(false) {}

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

void	AMateria::setowner(bool value) {
	this->_owner = value;
}

bool	AMateria::getowner() {
	return this->_owner;
}

AMateria::~AMateria() {}