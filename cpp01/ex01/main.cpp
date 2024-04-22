/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:25:56 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/10/22 12:00:43 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Z = zombieHorde(20, "Zombo");
    int i = 0;

    while(i < 20)
    {
        std::cout << Z[i].Getname() << "index " << i << " exists" << std::endl;
        i++;
    }

    delete []Z;

}
