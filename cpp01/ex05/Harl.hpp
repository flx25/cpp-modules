/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:10:55 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/15 09:26:24 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {

    void debug (void);
    void info (void);
    void warning(void);
    void error (void);
public:
    void complain(std::string level);
};


#endif
