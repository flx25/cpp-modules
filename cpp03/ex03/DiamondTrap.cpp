//
// Created by Felix Von nagel on 12/8/23.
//

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
    ClapTrap::Name = name + "_clap_name"
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 30;
}

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI( void ) {
    std::cout << "DiamondTrap " << Name << " has the ClapTrap name: " << ClapTrap::Name << std::endl;
}