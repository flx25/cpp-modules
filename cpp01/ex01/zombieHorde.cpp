/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:42:59 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/08 10:19:35 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
   Zombie *Z = new Zombie[N];

   for (int i = 0; i < N; i++)
   {
       Z[i].Setname(name);
       std::cout << Z[i].Getname() << i << ": BraiiiiiiinnnzzzZ..." << std::endl;
   }
   return (&Z[0]);
}