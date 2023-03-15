/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:11:28 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/15 10:03:49 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	try {
		if (ac != 2) {
			std::cerr << "Error" << std::endl;
			return 1;
		}
		std::string expr = av[1];
		std::cout << CalcResult(expr) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
