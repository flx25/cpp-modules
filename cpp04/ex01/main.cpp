//
// Created by Felix Von nagel on 12/13/23.
//
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    const Animal* a[4] = {new Dog(), new Dog(), new Cat(), new Cat() };
    Dog basic;
    {
        Dog tmp = basic;
    }
    for (int n = 0; n < 4; n++)
    {
        delete a[n];
    }
    return 0;
}