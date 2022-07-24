/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:08:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/24 19:19:21 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl	harl;
    
    if (ac != 2)
    {
        std::cout << "Error" << std::endl;
        return 0;
    }
	harl.complain(av[1]);
    return 0;
}
