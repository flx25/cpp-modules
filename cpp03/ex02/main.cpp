#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

    ClapTrap a("Jörg");
    ClapTrap b("Jürgen");
    a.attack("Jürgen");
    b.takeDamage(0);
    b.beRepaired(1);
    ScavTrap c("Scavi");
    c.guardGate();
    c.attack("Jürgen");
    b.takeDamage(20);
    c.beRepaired(1);
    FragTrap d("Fraggy");
    d.attack("Jörg");
    a.takeDamage(30);
    d.highFivesGuys();

}