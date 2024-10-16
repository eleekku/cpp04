#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
   // const Animal = animal;
    delete j;
    delete i;
    return 0;
}