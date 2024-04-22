/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:10:33 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/20 11:34:32 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getNumber(char *input)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == input)
            return (i);
    }
    return (-1);
}

int main(int argc, char **argv)
{
    Harl h;

    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (1);
    }

switch (getNumber(argv[1])){
        case 0:
            h.complain("error");
        case 1:
            h.complain("warning");
        case 2:
        h.complain("info");
        case 3:
        h.complain("debug");
        break;
    }


    return 0;
}