//
// Created by Felix Von nagel on 12/13/23.
//

#include "WrongCat.hpp"

void WrongCat::makeSound() const{
    std::cout << "Meow!!!" << std::endl;
}

WrongCat::WrongCat() {
    this->type = "Cat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    this->type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}