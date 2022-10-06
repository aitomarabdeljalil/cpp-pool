/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:29:40 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/06 17:33:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> arr(std::numeric_limits<int>::max());
    std::cout << arr.size() << std::endl;
    // for (size_t i = 0; i < 5; i++)
    //     arr[i] = i + 1;
    
    // for (size_t i = 0; i < arr.size(); i++)
    //     std::cout << arr[i] <<std::endl;
    return 0;
}