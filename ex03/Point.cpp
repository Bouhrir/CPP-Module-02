/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:51:35 by obouhrir          #+#    #+#             */
/*   Updated: 2023/12/26 13:14:04 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(float const &px, float const &py) : x(px), y(py){}

Point::Point(Point const &Copy) : x(Copy.x) , y(Copy.y){}

Point  &Point::operator=(Point const &P){
	return *this;
}

Fixed Point::get_x() const{
	return this->x;
}

Fixed Point::get_y() const{
	return this->y;
}

Point::~Point(){};