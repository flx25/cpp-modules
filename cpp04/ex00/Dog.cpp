//
// Created by Felix Von nagel on 12/13/23.
//

#include "Dog.hpp"

void Dog::makeSound() const{
    std::cout << "WOOOF WOOOOF!!!" << std::endl;
}

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other) {
    this->type = other.type;
    std::cout << "Dog copy constructor called" << std::endl;
}