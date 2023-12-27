/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:49:37 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/23 16:30:42 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(){
	FixedValue = 0;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const int integer){
	FixedValue = integer * (1 << fractional);
}

Fixed::Fixed(const float nmb){
	FixedValue = roundf(nmb * (float)(1 << fractional));
}

float Fixed::toFloat( void ) const{
	return (float)(FixedValue) / (1 << fractional);
}

float Fixed::toInt( void ) const{
	return FixedValue / (1 << this->fractional);;
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

std::ostream &operator<<( std::ostream &output, Fixed const &fix)
{
	return output << fix.toFloat();
}

Fixed &Fixed::operator*(const Fixed &fix){
	FixedValue *= fix.getRawBits() / (1 << fractional);
	return *this;
}

Fixed &Fixed::operator/(const Fixed &fix){
	FixedValue /= fix.getRawBits() / (1 << fractional);
	return *this;
}

Fixed &Fixed::operator+(const Fixed &fix){
	FixedValue += fix.getRawBits();
	return *this;
}

Fixed &Fixed::operator-(const Fixed &fix){
	FixedValue -= fix.getRawBits();
	return *this;
}
Fixed &Fixed::operator++(){
	++FixedValue;
	return *this;
}
Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	++FixedValue;
	return tmp;
}

Fixed &Fixed::operator--(){
	--FixedValue;
	return *this;
}
Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	--FixedValue;
	return tmp;
}

bool Fixed::operator>(Fixed const &fix){
	return (FixedValue > fix.getRawBits());
}

bool Fixed::operator<(Fixed const &fix){
	return (FixedValue < fix.getRawBits());
}

bool Fixed::operator>=(Fixed const &fix){
	return (FixedValue >= fix.getRawBits());
}

bool Fixed::operator<=(Fixed const &fix){
	return (FixedValue <= fix.getRawBits());
}

bool Fixed::operator==(Fixed const &fix){
	return (FixedValue == fix.getRawBits());
}

bool Fixed::operator!=(Fixed const &fix){
	return (FixedValue != fix.getRawBits());
}

//// max value
Fixed const &Fixed::max(Fixed const &a, Fixed const &b ){
	if (a.getRawBits() >  b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b ){
	if (a > b)
		return (a);
	return (b);
}
//min value

Fixed const &Fixed::min(Fixed const &a, Fixed const &b ){
	if (a.getRawBits() >  b.getRawBits())
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b ){
	if (a >  b)
		return (b);
	return (a);
}