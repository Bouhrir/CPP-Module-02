/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:23:34 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/27 16:35:30 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calculateArea(const float x1, const float y1, const float x2, const float y2, const float x3, const float y3) {
    return 0.5 * std::abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float ABC = calculateArea(a.get_x().toFloat(), a.get_y().toFloat(), b.get_x().toFloat(), b.get_y().toFloat(),c.get_x().toFloat(),c.get_y().toFloat());
	float PBC = calculateArea(point.get_x().toFloat(), point.get_y().toFloat(), b.get_x().toFloat(), b.get_y().toFloat(),c.get_x().toFloat(),c.get_y().toFloat());
	float PAC = calculateArea(point.get_x().toFloat(), point.get_y().toFloat(), b.get_x().toFloat(), b.get_y().toFloat(),c.get_x().toFloat(),c.get_y().toFloat());
	float PAB = calculateArea(point.get_x().toFloat(), point.get_y().toFloat(), b.get_x().toFloat(), b.get_y().toFloat(),c.get_x().toFloat(),c.get_y().toFloat());
	if (ABC == (PBC + PAC + PAB) && PBC != 0 && PAC != 0 && PAB != 0)
		return true;
	else
		return false;
}