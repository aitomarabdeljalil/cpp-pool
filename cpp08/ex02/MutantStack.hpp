/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:05:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/04 13:12:14 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iterator>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        MutantStack() : std::stack<T, Container>() {};
        MutantStack(const Container & ctnr) : std::stack<T, Container>(ctnr) {};
        MutantStack& operator=(const MutantStack& other) { this->c = other.c; return *this;}
        MutantStack(const MutantStack & other) : std::stack<T, Container>(other.c) {};
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
        const_iterator cbegin() { return this->c.cbegin(); }
        const_iterator cend() { return this->c.cend(); }
        reverse_iterator rbegin() { return this->c.rbegin(); }
        reverse_iterator rend() { return this->c.rend(); }
        const_reverse_iterator rcbegin() { return this->c.rcbegin(); }
        const_reverse_iterator rcend() { return this->c.rcend(); }
        ~MutantStack(){};
};

#endif