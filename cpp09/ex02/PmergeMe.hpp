/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:17:46 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/15 19:07:29 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <algorithm>
# include <cstdlib>
# include <ctime>
# define WHITE_SPACES (" \t\n\r\f\v")

template <typename Container>
void	merge_sort(Container& container) {
    if (container.size() > 1) {
        Container left(container.begin(), container.begin() + container.size() / 2);
        Container right(container.begin() + container.size() / 2, container.end());

        merge_sort(left);
        merge_sort(right);

        std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
    }
}

template <typename Container>
void	fillContainer(Container) {
	
}

std::string    trim(std::string s, std::string set);

#endif
