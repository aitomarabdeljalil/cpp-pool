/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:45:22 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/31 17:29:42 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
    int myints[] = { 10, 20, 30, 40 };
    std::vector<int> myvector (myints,myints+4);
    try {
        easyfind(myvector, 31);
    }
    catch(const char* msg) {
        std::cerr << msg << std::endl;
    }
    return 0;
}
