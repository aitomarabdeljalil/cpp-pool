/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:00:44 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/27 19:30:04 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    Point	a(7, 7);
	Point	b(11, 1);
	Point	c(2, 2);
	Point	point(7, 3);

	if (bsp(a, b , c, point) == true)
		std::cout << "the point is inside of the triangle" << std::endl;
	else
		std::cout << "the point is outside the triangle" << std::endl;
	return (0);
}

