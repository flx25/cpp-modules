//
// Created by Felix Von nagel on 12/8/23.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->Hit_Points = 100;
    this->Energy_Points = 100;
    this->Attack_Damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (this->Energy_Points > 0)
    {
        std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
        this->Energy_Points--;
    }
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << Name << " is happy and requesting a high five!" << std::endl;
}
