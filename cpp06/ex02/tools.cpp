/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:30:13 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/08 16:59:34 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int getRandom()
{
	srand((unsigned) time(NULL));
	int random = (rand() % 3) + 1;
	return random;
}

Base * generate(void)
{
    int rd = getRandom();

    if (rd == 1)
        return new A();
    else if (rd == 2)
        return new B();
    return new C();
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type C" << std::endl;
    else
        std::cout << "Unknown Type" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type A" << std::endl;
    }
    catch(...)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "Type B" << std::endl;
        }
        catch(...)
        {
            try
            {        
                (void)dynamic_cast<C&>(p);
                std::cout << "Type C" << std::endl;
            }
            catch(...)
            {
                std::cout << "Unknown Type" << std::endl;
            }
        }
        
    }
    
}