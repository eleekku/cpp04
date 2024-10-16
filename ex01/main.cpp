#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* animals[20];
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    Cat *originalcat;
    Cat *copycat;
    originalcat = new Cat();
    copycat = new Cat(*originalcat);

    std::cout << "memory address of original cat " << originalcat << std::endl;
    std::cout << "memory address of copy cat " << copycat << std::endl;
    for (int i = 0; i < 20; i++)
    {
        delete animals[i];
    }
    delete originalcat;
    delete copycat;
    return 0;
}