/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:52:21 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/26 19:09:07 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const float _x, const float _y);
    Point(Point& _point);
    Point& operator=(const Point& _point);
    ~Point();
};

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(const float _x, const float _y) : x(_x), y(_y) {}

Point::Point(Point& _point) : x(_point.x), y(_point.y) {}

Point & Point::operator= (const Point& _point)
{
	this->_fixed = _point._fixed;
	return (*this);
}

Point::~Point() {}

#endif