#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	ICharacter* test = new Character("test");
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(0);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	test->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//bob->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");

	me->equip(tmp);
	tmp = src->createMateria("ice");

//	me->unequip(1);
	me->unequip(2);
	me->unequip(3);

	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	delete test;
	delete tmp;
	return 0;
}