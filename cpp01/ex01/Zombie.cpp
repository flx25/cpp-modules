/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:27:06 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/08 10:07:30 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << std::endl;
}

void Zombie::Setname(std::string name)
{
    this->name = name;
}

std::string Zombie::Getname()
{
    return this->name;
}
