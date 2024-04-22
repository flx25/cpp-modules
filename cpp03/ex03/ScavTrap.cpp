//
// Created by vboxuser on 07.12.23.
//
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->Energy_Points > 0)
    {
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
        this->Energy_Points--;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in gatekeeper mode" << std::endl;
}
