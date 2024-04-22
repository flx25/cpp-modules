//
// Created by Felix Von nagel on 12/6/23.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name (name){
    std::cout << "Default constructor called" << std::endl;
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Attack_Damage = other.Attack_Damage;
    this->Energy_Points = other.Energy_Points;
    this->Hit_Points = other.Hit_Points;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {  // Check for self-assignment
        this->Name = other.Name;
        this->Attack_Damage = other.Attack_Damage;
        this->Energy_Points = other.Energy_Points;
        this->Hit_Points = other.Hit_Points;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (this->Energy_Points > 0)
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
        this->Energy_Points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount < this->Hit_Points)
        this->Hit_Points -= amount;
    else
        this->Hit_Points = 0;
    std::cout << "ClapTrap " << Name << " takes " << amount << " damage and now has " << this->Hit_Points << " hit-points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->Energy_Points > 0)
    {
        this->Energy_Points--;
        this->Hit_Points = Hit_Points + amount;
        std::cout << "ClapTrap " << Name << " repairs itself by " << amount << " hit-points and now has " << this->Hit_Points << std::endl;
    }
}
