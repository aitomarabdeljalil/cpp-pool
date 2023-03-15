/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:28:36 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/15 18:48:21 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::string    trim(std::string s, std::string set)
{
    s.erase(0, s.find_first_not_of(set));
    s.erase(s.find_last_not_of(set) + 1);
    return (s);
}
