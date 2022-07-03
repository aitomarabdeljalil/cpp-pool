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
	int index;

	fileto.open(filename + ".replace", std::ios::out);
	if (!fileto)
		std::cout << "File creation failed" << std::endl;
	else
	{
		file.open(filename, std::ios::in);
		if (!file)
		{
			std::cout << "Source file cant get open or doesnt exist" << std::endl;
			return 0;
		}
		while (getline(file, line))
		{
            while ((index = (int) line.find(s1)) != std::string::npos)
			{
				line.erase(index, s1.length);
			}
			
			fileto << line << "\n";
        }
	}
	return 0;
}