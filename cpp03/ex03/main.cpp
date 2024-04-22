#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap a("Demon");
    a.whoAmI();
    a.ScavTrap::attack("Himself");
    a.takeDamage(30);
}