/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:17:46 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/14 16:33:55 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <vector>
# include <deque>

template <typename Container>
void merge_sort(Container& container) {
    if (container.size() > 1) {
        Container left(container.begin(), container.begin() + container.size() / 2);
        Container right(container.begin() + container.size() / 2, container.end());

        merge_sort(left);
        merge_sort(right);

        std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
    }
}

class PmergeMe
{
private:
	std::vector<int> _vec;
	std::deque<int> _dec;
public:
	PmergeMe(/* args */);
	~PmergeMe();
};

PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::~PmergeMe()
{
}

#endif
