//
// Created by Felix Von nagel on 12/13/23.
//

#include "Cat.hpp"


void Cat::makeSound() const{
    std::cout << "Meow!!!" << std::endl;
}

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}