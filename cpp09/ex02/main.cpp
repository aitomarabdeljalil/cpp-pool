/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:20:49 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/15 16:13:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void showdq(std::deque<int> g)
{
    std::deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        std::cout << '\t' << *it;
    std::cout << std::endl;
}

int main(int ac, char **av) {
	std::vector<int> _vec;
	std::deque<int> _deq;
	try
	{
		if (ac < 2)
			throw std::invalid_argument("Error");
		for (int i = 1; i < ac; ++i)
		{
			int value = atoi(av[i]);
			if (value <= 0)
			{
				std::cerr << "Error: Non-positive value provided" << std::endl;
				return 1;
			}
			_vec.push_back(value);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// {
	// 	std::srand(std::time(nullptr));

	// 	std::vector<int> vec;
	// 	for (int i = 0; i < 10; i++) {
	// 		vec.push_back(std::rand() % 100);
	// 	}

	// 	std::cout << "Original vector: ";
	// 	for (int i = 0; i < vec.size(); i++) {
	// 		std::cout << vec[i] << " ";
	// 	}
	// 	std::cout << std::endl;

	// 	merge_sort(vec);

	// 	std::cout << "Sorted vector: ";
	// 	for (int i = 0; i < vec.size(); i++) {
	// 		std::cout << vec[i] << " ";
	// 	}
	// 	std::cout << std::endl;
	// }
	// {
	// 	std::srand(std::time(nullptr));

	// 	std::vector<int> deq;
	// 	for (int i = 0; i < 10; i++) {
	// 		deq.push_back(std::rand() % 100);
	// 	}

	// 	std::cout << "Original deque: ";
	// 	for (int i = 0; i < deq.size(); i++) {
	// 		std::cout << deq[i] << " ";
	// 	}
	// 	std::cout << std::endl;

	// 	merge_sort(deq);

	// 	std::cout << "Sorted deque: ";
	// 	for (int i = 0; i < deq.size(); i++) {
	// 		std::cout << deq[i] << " ";
	// 	}
	// 	std::cout << std::endl;
	// }
	return 0;
}
