#pragma once

#include "mainh.hpp"

class Ice : public AMateria {
    public:
		Ice();
		Ice(Ice const & src);
		Ice & operator=(Ice const & src);
		~Ice();

		AMateria* clone() const override;
		virtual void use(ICharacter& target) override;

};