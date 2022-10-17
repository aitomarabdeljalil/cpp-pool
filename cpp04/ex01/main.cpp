/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:30:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/17 13:14:43 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Animal* j = new Dog();
    Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }

    return 0;
}