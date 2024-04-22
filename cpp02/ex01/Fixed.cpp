/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:15:42 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/11/27 12:15:56 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
 std::cout << "Default constructor called" << std::endl;
 this->fixed_value = 0;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(copy.getRawBits());
}

Fixed::Fixed(Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(copy.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
   // std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_value;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_value = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed( const int n ) : fixed_value( n << frac_value ) {
     std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) :  fixed_value( roundf( n * ( 1 << frac_value ) ) ) {
    std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt(void) const {
    return this->fixed_value >> frac_value;
}

float Fixed::toFloat() const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << frac_value );
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();
    return o;
}