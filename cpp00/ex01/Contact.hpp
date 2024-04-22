/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:57:39 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/08/29 10:32:23 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {


    std::string	first_name;
    std::string	last_name;
    std::string	nickname;
    std::string	phone_number;
    std::string	darkest_secret;
    int			index;

    public:
    Contact();
	Contact(std::string	first_name, std::string	last_name, std::string	nickname, std::string	phone_number, std::string	darkest_secret, int index);
	~Contact(void);
    const std::string Getattr(std::string input);
    int     Getindex(void);
    void Setattr(const std::string input, const std::string tochange);
};

#endif
