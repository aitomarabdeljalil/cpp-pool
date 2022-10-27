/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:28:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/27 19:39:33 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(const float _x, const float _y) : x(_x), y(_y) {}

Point::Point(const Point& _point) : x(_point.x), y(_point.y) {}

Point& Point::operator= (const Point& _point)
{
	new (this) Point(_point.x.toFloat(), _point.y.toFloat());
	return (*this);
}

float cal_det(Point a, Point b, Point c)
{
    float x = a.getX();
    float y1 = b.getY();
    float y2 = c.getY();
    return (x * (y1 - y2));
}

float Point::getX(void) const{return this->x.toFloat();};
float Point::getY(void) const{return this->y.toFloat();};

Point::~Point() {}