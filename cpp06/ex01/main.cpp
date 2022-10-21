/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:35:18 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/21 16:38:11 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
    Data d1(1, 'c', true);
    Data* d2;
    uintptr_t raw;

    std::cout << "--------------------------------------" << std::endl;
    std::cout << "d1._x = " << d1.getX() << std::endl;
    std::cout << "d1._y = " << d1.getY() << std::endl;
    std::cout << "d1._z = " << d1.getZ() << std::endl;

    raw = serialize(&d1);
    d2 = deserialize(raw);

    std::cout << "--------------------------------------" << std::endl;
    std::cout << "d2->_x = " << d2->getX() << std::endl;
    std::cout << "d2->_y = " << d2->getY() << std::endl;
    std::cout << "d2->_z = " << d2->getZ() << std::endl;
    return 0;
}