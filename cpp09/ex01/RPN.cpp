/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:58:55 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/25 15:49:23 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int CalcResult(std::string expr)
{
	std::stack<int> st;
	for (size_t i = 0; i < expr.length(); i++)
	{
		int op1, op2;
		if (std::isspace(expr[i]))
			continue;
		if (expr[i] >= '0' && expr[i] <= '9')
			st.push(expr[i] - '0');
		else if (expr[i] == '+') {
			if (st.size() < 2)
				throw std::runtime_error("Error");
            op1 = st.top();
			st.pop();
            op2 = st.top();
			st.pop();
            st.push(op1 + op2);
		}
		else if (expr[i] == '-') {
			if (st.size() < 2)
				throw std::runtime_error("Error");
            op2 = st.top();
			st.pop();
            op1 = st.top();
			st.pop();
            st.push(op1 - op2);
		}
		else if (expr[i] == '*') {
			if (st.size() < 2)
				throw std::runtime_error("Error");
            op1 = st.top();
			st.pop();
            op2 = st.top();
			st.pop();
            st.push(op1 * op2);
		}
		else if (expr[i] == '/') {
			if (st.size() < 2)
				throw std::runtime_error("Error");
            op2 = st.top();
			st.pop();
            op1 = st.top();
			st.pop();
			if (op2 == 0)
				throw std::runtime_error("Error div by 0");
            st.push(op1 / op2);
		}
		else
			throw std::runtime_error("Error");
	}
	if (st.empty() || st.size() != 1)
		throw std::runtime_error("Error");
	return st.top();
}
