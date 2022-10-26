/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:40:22 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/26 16:01:30 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

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
	std::ifstream file;
	std::ofstream fileto;
	std::string line;
	size_t index;
	std::stringstream	buffer;
	std::string			content;
	int  j = -1;
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
		fileto.open(filename + ".replace", std::ios::out);
		buffer << file.rdbuf();
		content = buffer.str();
		while ((index = content.find(s1)) != std::string::npos && (size_t)j > index)
		{
			if (s1 == s2 || s1 == "" || s2 == "")
				break; 
			j = index;
			content.erase(index, s1.length());
			content.insert(index, s2);
		}
		fileto << content;
		file.close();
		fileto.close();
	}
	return 0;
}