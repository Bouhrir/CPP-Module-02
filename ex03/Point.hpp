/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:51:21 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/27 16:38:34 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;	
		Fixed const y;
	public:
		Point();
		Point(float const &px, float const &py);
		Point(Point const &Copy);
		Point  &operator=(Point const &P);
		Fixed get_x() const;
		Fixed get_y() const;
		~Point();

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif