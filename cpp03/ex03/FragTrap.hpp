//
// Created by Felix Von nagel on 12/8/23.
//

#ifndef CPP03_FRAGTRAP_HPP
#define CPP03_FRAGTRAP_HPP


#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
    FragTrap(std::string name);
    ~FragTrap();
    void attack(const std::string& target);
    void highFivesGuys(void);

};

#endif //CPP03_FRAGTRAP_HPP
