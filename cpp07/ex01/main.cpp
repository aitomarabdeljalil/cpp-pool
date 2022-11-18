/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:19:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/14 08:31:06 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <ostream>
#include <iostream>

class Awesome {
    public: 
    Awesome( void ) : _n( 42 ) { return; } 
    int get( void ) const { return this->_n; } 
    private: 
    int _n; 
}; 

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T > 
void print( T const & x ) 
{ 
    std::cout << x << std::endl; return; 
}

int main() 
{ 
    int tab[] = { 0, 1, 2, 3, 4 }; 
    Awesome tab2[5];
    iter( tab, 5, print ); 
    iter( tab2, 5, print ); 
    return 0; 
}

// void fun(int *s)
// {
//     *s += 10;
// }


// int main()
// {
//     //int ar[5] = {1,3,5,6,7};
//     std::string ar[4] = { "Blue", "Red", "Orange", "Yellow" };
//     std::cout << "array befor iter" << std::endl;
//     for(int i = 0; i < 4; i++) {
//         std::cout << ar[i] << std::endl;
//     }
//     std::cout << "array after iter" << std::endl;
//     iter(ar, 4, print);
//     // for(int i = 0; i < 4; i++) {
//     //     std::cout << ar[i] << std::endl;
//     // }
//     return 0;
// }