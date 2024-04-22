#pragma once

#include <string>
#include <iostream>

class ClapTrap {
private:
    std::string Name;
    unsigned int Hit_Points;
    unsigned int Energy_Points;
    unsigned int Attack_Damage;


public:
    ClapTrap(std::string name);

    ClapTrap(const ClapTrap& other);

    ClapTrap& operator=(const ClapTrap& other);

    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};