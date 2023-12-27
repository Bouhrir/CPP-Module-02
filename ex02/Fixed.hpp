/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:48:57 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/26 15:59:45 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

using std::string;
using std::cout;
using std::endl;

class Fixed{
	private:
		int FixedValue;
		static const int fractional = 8;
	public:
		Fixed();
		Fixed(Fixed const& fix);
		Fixed &operator=(Fixed const &fix);
		Fixed &operator*(Fixed const &fix);
		Fixed &operator/(Fixed const &fix);
		Fixed &operator+(Fixed const &fix);
		Fixed &operator-(Fixed const &fix);
		Fixed operator++(int);
		Fixed &operator++();
		Fixed operator--(int);
		Fixed &operator--();
		bool operator<(Fixed const &fix);
		bool operator>(Fixed const &fix);
		bool operator>=(Fixed const &fix);
		bool operator<=(Fixed const &fix);
		bool operator==(Fixed const &fix);
		bool operator!=(Fixed const &fix);
		Fixed(const int integer);
		Fixed(const float nmb);
		float toFloat( void ) const;
		float toInt( void ) const;
		int getRawBits( void ) const;
		//max
		static Fixed const  &max( Fixed const &a, Fixed const &b );
		static Fixed &max(Fixed &a, Fixed &b );
		//min
		static Fixed const &min(Fixed const &a, Fixed const &b );
		static Fixed &min(Fixed &a, Fixed &b );
		~Fixed();
};	
std::ostream &operator<<( std::ostream &output, Fixed const &fix);

#endif