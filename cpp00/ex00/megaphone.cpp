/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:43:16 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/28 14:30:26 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
		for (int j = 0; j < (int) strlen(av[i]); j++)
			std::cout <<  (char)toupper(av[i][j]);;
	std::cout << std::endl;
	return 0;
}

