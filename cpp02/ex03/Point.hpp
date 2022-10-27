/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:52:21 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/27 17:18:33 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const float _x, const float _y);
    Point(const Point& _point);
    float getX(void) const;
    float getY(void) const;
    Point& operator=(const Point& _point);
    ~Point();
};

float cal_det(Point a, Point b, Point  c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif