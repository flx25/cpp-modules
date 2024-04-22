//
// Created by Felix Von nagel on 12/13/23.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "*standard animal sounds*" << std::endl;
}
