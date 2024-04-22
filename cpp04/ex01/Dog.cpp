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
    this->brain = new Brain();
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog( const Dog& src )
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}