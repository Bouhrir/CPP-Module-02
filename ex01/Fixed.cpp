/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:10:18 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/20 18:22:42 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	cout << "Default constructor called" << endl;
	FixedValue = 0;
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const int integer){
	cout << "Int constructor called" << endl;
	FixedValue = integer * (1 << fractional);
}

Fixed::Fixed(const float nmb){
	cout << "Float constructor called" << endl;
	FixedValue = roundf(nmb * (1 << fractional));
}

float Fixed::toFloat( void ) const{
	return (float)FixedValue / (1 << fractional);
}

float Fixed::toInt( void ) const{
	return FixedValue / (1 << fractional);
}

int Fixed::getRawBits( void ) const {
	return FixedValue;
}

//copy constructor
Fixed::Fixed(const Fixed &fix){
	cout << "Copy constructor called" << endl;
	*this = fix;
}

//operaters overloading 
Fixed &Fixed::operator=(const Fixed &fix){
	cout << "Copy assignment operator called" << endl;
	FixedValue = fix.getRawBits();
	return *this;
}

std::ostream &operator<<( std::ostream &output, Fixed const &fix)
{
	return output << fix.toFloat();
}