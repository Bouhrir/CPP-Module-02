/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:15:23 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/24 21:11:46 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


using namespace std;

class Fixed {
	private:
		int FixedValue;
		static const int fractional = 8;
	public:
		Fixed();
		Fixed(Fixed const& fix);
		Fixed &operator=(Fixed const& fix);
		int getRawBits( void ) const;
		void setRawBits( int const raw );		
		~Fixed();
};

#endif