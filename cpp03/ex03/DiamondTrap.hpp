//
// Created by Felix Von nagel on 12/8/23.
//

#ifndef CPP03_DIAMONDTRAP_HPP
#define CPP03_DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap {
    DiamondTrap(std::string name);
    ~DiamondTrap();

    using ScavTrap::attack;
    void    whoAmI( void );
};


#endif //CPP03_DIAMONDTRAP_HPP
