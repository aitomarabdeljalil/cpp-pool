/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:43:55 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/27 19:39:23 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float area(Point a, Point b, Point c)
{
    return (0.5 * (cal_det(a, b, c) + cal_det(b, c, a) + cal_det(c, a, b)));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float _area, area1, area2, area3;
    _area = area(a, b, c);
    if (_area == 0)
        return false;
    if (_area < 0)
        _area *= -1;
    area1 = area(a, b, point);
    if (area1 < 0)
        area1 *= -1;
    area2 = area(a, c, point);
    if (area2 < 0)
        area2 *= -1;
    area3 = area(c, b, point);
    if (area3 < 0)
        area3 *= -1;
    std::cout << _area << " " << area1 << " " << area2 << " " << area3 << std::endl;
    if (area1 + area2 + area3 == _area)
        return true;
    else
        return false;
}
