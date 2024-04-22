/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:08:11 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/06 09:16:57 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

// does not work for more than one word input per cin yet
// need to take care of public private according to eval sheet
int main () {
    PhoneBook phony;

    char buff[512];
    phony.current_write = 0;
    phony.total_entries = 0;

    std::cout << "Welcome to the Phonybook, enter either ADD, SEARCH or EXIT!" << std::endl;
    while(1)
    {
    std::cin >> buff;
    if(!strcmp(buff, "ADD"))
    {
        phony.Add();
        phony.total_entries++;
        if (phony.current_write < 7)
            phony.current_write++;
        else
            phony.current_write = 1;
    }
    else if (!strcmp(buff, "SEARCH"))
        phony.Search();
    else if (!strcmp(buff, "EXIT"))
        phony.Exit();
    else
        std::cout << "Please enter a valid command!" << std::endl;

    }
    return 0;
}