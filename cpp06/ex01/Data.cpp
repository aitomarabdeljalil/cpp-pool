/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:41:06 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/10 19:07:26 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data* deserialize(uintptr_t raw)
{
    Data* ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}