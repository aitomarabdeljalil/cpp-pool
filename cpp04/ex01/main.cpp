/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:30:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/23 15:40:06 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Animal anm[2];
    
    Brain b;

    b[0] = "hello";

    std::cout << b[0] << std::endl;
    return (0);
}