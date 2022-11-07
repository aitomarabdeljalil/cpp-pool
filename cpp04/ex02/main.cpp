/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:30:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/07 14:34:19 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Animal j;
	Animal* i = new Cat();

    delete j;
    delete i;

    Cat Basic;
    {
        Cat tmp = Basic;
    }

}