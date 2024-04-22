/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:27:06 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/10/22 11:50:43 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

    std::string name;
    void announce(void);
public:
    Zombie(std::string name);
    ~Zombie (void);

};

Zombie *newZombie(std::string name);

void randomChump( std::string name );

#endif
