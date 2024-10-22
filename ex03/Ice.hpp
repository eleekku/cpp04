#pragma once

#include "AMateria.hpp"
class AMateria;

class Ice : public AMateria {
    public:
		Ice();
		Ice(Ice const & src);
		Ice & operator=(Ice const & src);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);

};