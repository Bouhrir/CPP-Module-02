/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:05:29 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/26 22:15:10 by obouhrir         ###   ########.fr       */
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
		Fixed &operator=(Fixed const& fix);
		Fixed(const int integer);
		Fixed(const float nmb);
		float toFloat( void ) const;
		float toInt( void ) const;
		int getRawBits( void ) const;
		~Fixed();
};

std::ostream &operator<<(std::ostream &output, Fixed const &fix);

#endif