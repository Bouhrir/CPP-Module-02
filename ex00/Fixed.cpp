/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:15:10 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/25 17:30:40 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	cout << "Default constructor called" << endl;
	FixedValue = 0;
}

Fixed::Fixed(Fixed const &fix){
	cout << "Copy constructor called" << endl;
	*this = fix;
}

Fixed &Fixed::operator=(Fixed const &fix){

	cout << "Copy assignment operator called" << endl;
	FixedValue = fix.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	cout << "getRawBits member function called" << endl;
	return FixedValue;
}

void Fixed::setRawBits(int const raw){
	FixedValue = raw;
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}