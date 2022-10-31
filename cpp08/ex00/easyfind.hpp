/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:55:58 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/31 15:47:53 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <exception>

template <typename T>
void easyfind(T& container, int _tofind)
{
    //Declaring iterator
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), _tofind);
    if (it == container.end())
        throw "Error, didn't found!";
    else
        std::cout << "Element found " << *it << std::endl;
}


#endif