/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:17:46 by aait-oma          #+#    #+#             */
/*   Updated: 2023/05/03 14:07:16 by aait-oma         ###   ########.fr       */
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

template<class Iter>
void insertionSort(Iter first, Iter last) {

    for (Iter i = first + 1; i < last; ++i) {
        typename Iter::value_type key = *i;
        Iter j = i - 1;

        while (j >= first && *j > key) {
            *(j + 1) = *j;
            --j;
        }
        *(j + 1) = key;
    }
}

template<class Iter>
void merge_sort(Iter first, Iter last)
{
    if (last - first <= 10)
		insertionSort(first, last);
    else {
        Iter middle = first + (last - first) / 2;
        merge_sort(first, middle);
        merge_sort(middle, last);
        std::inplace_merge(first, middle, last);
    }
}
std::string    trim(std::string s, std::string set);

#endif
