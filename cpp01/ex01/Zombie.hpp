/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:27:06 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/08 10:05:20 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

    std::string name;

public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie (void);
    void Setname(std::string name);
    std::string Getname(void);

};
Zombie* zombieHorde( int N, std::string name );

#endif
