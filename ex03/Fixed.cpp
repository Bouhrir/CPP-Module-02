/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:49:57 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/27 12:31:37 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	FixedValue = 0;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const float nmb){
	FixedValue = roundf(nmb * (float)(1 << fractional));
}

float Fixed::toFloat( void ) const{
	return (float)(FixedValue) / (1 << fractional);
}

int Fixed::getRawBits( void ) const {
	return FixedValue;
}

//copy constructor
Fixed::Fixed(const Fixed &fix){
	*this = fix;
}

//operators overloading 
Fixed &Fixed::operator=(const Fixed &fix){
	FixedValue = fix.getRawBits();
	return *this;
}