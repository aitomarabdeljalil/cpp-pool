/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:13:39 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/11 17:08:57 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <stack>

class RPN
{
private:
	std::stack<std::string>	st;
public:
	RPN(/* args */);
	std::stack<std::string> parse_expression(std::string expression) {

	}
	int evaluate_expression(std::stack<std::string> st) {

}
	~RPN();
};

RPN::RPN(/* args */)
{
}

RPN::~RPN()
{
}


#endif
