/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:23:39 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/12 11:24:35 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {

}

Weapon::~Weapon() {

}

std::string Weapon::getType() {
    return (type);
}

void Weapon::setType(std::string newType) {
    this->type = newType;
}