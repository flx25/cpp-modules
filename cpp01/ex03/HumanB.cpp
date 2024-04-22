/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:24:45 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/12 13:19:44 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name (name){
    weapon = NULL;
}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon &newWeapon) {
    this->weapon = &newWeapon;
}

void HumanB::attack() {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " tries to attack but does not have a weapon." << std::endl;
}
