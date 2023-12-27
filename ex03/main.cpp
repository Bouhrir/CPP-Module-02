/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:54:07 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/27 16:39:11 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(){
	Point const a(1, 1);
	Point const b(4, 1);
	Point const c(1, 4);
	Point const p(2, 2);
	if (bsp(a, b, c, p))
		cout << "the point belong to the triangle" << endl;
	else
		std::cerr << "the point does not belong to the triangle" << endl;
}