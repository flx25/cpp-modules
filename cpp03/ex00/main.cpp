#include "ClapTrap.hpp"

int main(void)
{

    ClapTrap a("Jörg");
    ClapTrap b("Jürgen");
    a.attack("Jürgen");
    b.takeDamage(0);
    b.beRepaired(1);
}