/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:47:05 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/08/29 11:06:03 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

}

PhoneBook::~PhoneBook(){

}

void PhoneBook::Add() {

    std::string	first_name;
    std::string	last_name;
    std::string	nickname;
    std::string	phone_number;
    std::string	darkest_secret;

    std::cout << "Please enter the First Name of your new Contact!" << std::endl;
    std::cin >> first_name;
    std::cout << "Please enter the Last Name of your new Contact!" << std::endl;
    std::cin >> last_name;
    std::cout << "Please enter the Nickname of your new Contact!" << std::endl;
    std::cin >> nickname;
    std::cout << "Please enter the Phone Number of your new Contact!" << std::endl;
    std::cin >> phone_number;
    std::cout << "Please enter the Darkest Secret of your new Contact!" << std::endl;
    std::cin >> darkest_secret;

    Contact output(first_name, last_name, nickname, phone_number, darkest_secret, current_write);
    contacts[current_write] = output;
    std::cout << "Contact successfully saved!" << std::endl;

}

std::string ShortenEntry(std::string input)
{
    std::string output;
    if (input.length() >= 10)
    {
        output = input;
        output[9] = '.';
        return std::string(output, 0, 10);
    }
    else
        return input;
}

void PhoneBook::Search() {
    int i = 0;
    int number = 0;
// read it closely, truncate it in the end
    while (i < total_entries && i < 8)
    {
        std::cout << std::right << std::setw(10) << contacts[i].Getindex() << "|" << ::ShortenEntry(contacts[i].Getattr("first_name")) << "|" << ::ShortenEntry(contacts[i].Getattr("last_name")) << "|" << ::ShortenEntry(contacts[i].Getattr("nickname")) << std::endl;
        i++;
    }
    std::cout << "Please enter the Index of the Contact you want to see!" << std::endl;
    std::cin >> number ;

    while (number > 7 || number >= total_entries)
    {
        std::cout << "Please enter a valid Number! | Type 99 for exit" << std::endl;
        std::cin >> number ;
        if (number == 99)
            return;
    }

    std::cout << "Index : " << contacts[number].Getindex() << std::endl;
    std::cout << "First Name : " << contacts[number].Getattr("first_name") << std::endl;
    std::cout << "Last Name : " << contacts[number].Getattr("last_name") << std::endl;
    std::cout << "Nickname : " << contacts[number].Getattr("nickname") << std::endl;
    std::cout << "Phone Number : " << contacts[number].Getattr("phone_number") << std::endl;
    std::cout << "Darkest Secret : " << contacts[number].Getattr("darkest_secret") << std::endl;


}

void PhoneBook::Exit() {

exit(0);
}