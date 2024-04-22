/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:33:10 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/08/29 11:06:02 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"


class PhoneBook {

    Contact contacts[8];
    std::string ShortenEntry(std::string input);
public:
    PhoneBook();
	~PhoneBook();

	void Add();
	void Search();
	void Exit();

    int     current_write;
    int     total_entries;
};

#endif
