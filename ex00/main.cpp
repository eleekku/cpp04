#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const WrongAnimal* meta = new WrongAnimal();
const Animal* j = new Dog();
const WrongAnimal* i = new WrongCat();
const Animal* h = new Cat();
const Animal* animal = new Animal();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the wrong sound
j->makeSound();
h->makeSound();
meta->makeSound();
animal->makeSound();
delete meta;
delete j;
delete i;
return 0;
}