/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:14:35 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/08/29 11:02:38 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::Contact (std::string	first_name, std::string	last_name,
		std::string	nickname, std::string	phone_number, std::string	darkest_secret, int	index)
		: first_name(first_name), last_name(last_name), nickname(nickname),
		phone_number(phone_number), darkest_secret(darkest_secret), index(index)
		{

		}

Contact::~Contact()
{

}

const std::string Contact::Getattr(std::string input)
{
    if (input == "first_name")
        return this->first_name;
    else if (input == "last_name")
        return this->last_name;
    else if (input == "nickname")
        return this->nickname;
    else if (input == "phone_number")
        return this->phone_number;
    else if (input == "darkest_secret")
        return this->darkest_secret;
    else
        return (NULL);
}

int Contact::Getindex(void)
{
    return this->index;
};

void Contact::Setattr(const std::string input, const std::string tochange)
{
    if (tochange == "first_name")
        first_name = input;
    else if (tochange == "last_name")
        last_name = input;
    else if (tochange == "nickname")
        nickname = input;
    else if (tochange == "phone_number")
        phone_number = input;
    else if (tochange == "darkest_secret")
        darkest_secret = input;
};