/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:40:22 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/03 19:37:55 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
// #include <ifstream>
// #include <ofstream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error!" << std::endl;
		return 0;
	}
	std::string	filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::fstream file;
	std::fstream fileto;
	std::string line;

	fileto.open(filename + ".replace", std::ios::out);
	if (!fileto)
		std::cout << "File creation failed" << std::endl;
	else
	{
		file.open(filename, std::ios::in);
		while (getline(file, line)) {
            
			fileto << line << "\n";
        }
	}
	return 0;
}