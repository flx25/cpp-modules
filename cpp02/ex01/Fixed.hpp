/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:15:42 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/25 12:31:50 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

#include <iostream>

class Fixed {
    int fixed_value;
    static const int frac_value = 8;
public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed(Fixed &copy);
    Fixed(const int n);
    Fixed(const float n);
    float toFloat( void ) const;
    int toInt( void ) const;


    Fixed& operator=(const Fixed& rhs);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif //CPP02_FIXED_HPP
