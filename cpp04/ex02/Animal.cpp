//
// Created by Felix Von nagel on 12/12/23.
//

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->type = other.type;
}

Animal &Animal::operator=(const Animal &other) {
    this->type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "*standard animal sounds*" << std::endl;
}
