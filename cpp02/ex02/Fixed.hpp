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

    bool    operator>( const Fixed &rhs ) const ;
    bool    operator<( const Fixed &rhs ) const ;
    bool    operator>=( const Fixed &rhs ) const ;
    bool    operator<=( const Fixed &rhs ) const ;
    bool    operator==( const Fixed &rhs ) const ;
    bool    operator!=( const Fixed &rhs ) const ;

    Fixed   operator+( const Fixed &rhs ) const ;
    Fixed   operator-( const Fixed &rhs ) const ;
    Fixed   operator*( const Fixed &rhs ) const ;
    Fixed   operator/( const Fixed &rhs ) const ;

    Fixed&  operator++( void ); // prefix
    Fixed   operator++( int ); // postfix
    Fixed&  operator--( void ); // prefix
    Fixed   operator--( int ); // postfix

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );
};
std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif //CPP02_FIXED_HPP
