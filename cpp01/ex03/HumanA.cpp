/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:24:11 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/12 11:12:27 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :  weapon(weapon), name (name) {

}

HumanA::~HumanA() {

}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}