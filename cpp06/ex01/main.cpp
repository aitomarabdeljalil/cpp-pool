/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:35:18 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/10 19:07:09 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
    Data d1;
    d1.name = "test";
    d1.age = 18;
    Data *d2;
    uintptr_t raw;

    std::cout << "--------------------------------------" << std::endl;
    std::cout << "d1.name = " << d1.name << std::endl;
    std::cout << "d1.age = " << d1.age << std::endl;

    raw = serialize(&d1);
    d2 = deserialize(raw);

    std::cout << "--------------------------------------" << std::endl;
    std::cout << "d2->name = " << d2->name << std::endl;
    std::cout << "d2->age = " << d2->age << std::endl;

    return 0;
}