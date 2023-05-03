/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:20:49 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/25 14:18:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	std::vector<int> _vec;
	std::deque<int> _deq;
	try
	{
		if (ac < 2)
			throw std::invalid_argument("Error");
		for (int i = 1; i < ac; ++i)
		{
			const char *nb = trim(av[i], " ").c_str();
			char *ptr;
			long value = strtol(nb, &ptr, 10);
			if (*nb == '\0' || *ptr != '\0')
				throw std::invalid_argument("Error");
			if (value < 0 || value > INT_MAX)
				throw std::invalid_argument("Error");
			_vec.push_back(value);
			_deq.push_back(value);
		}
		std::cout << "Before:\t";
		for (size_t i = 0; i < _vec.size(); i++) {
			std::cout << _vec[i] << " ";
		}
		std::cout << std::endl;
		clock_t	time_vec = clock();
		merge_sort(_vec.begin(), _vec.end());
		time_vec = clock() - time_vec;
		clock_t	time_deq = clock();
		merge_sort(_deq.begin(), _deq.end());
		time_deq = clock() - time_deq;
		std::cout << "After:\t";
		for (size_t i = 0; i < _vec.size(); i++) {
			std::cout << _vec[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector " << ((float)time_vec/CLOCKS_PER_SEC) * 1000000 << " us" << std::endl;
		std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque " << ((float)time_deq/CLOCKS_PER_SEC) * 1000000 << " us" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
