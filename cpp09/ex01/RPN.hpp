/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:13:39 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/13 17:08:32 by aait-oma         ###   ########.fr       */
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
		std::stack<int>	st;
	public:
		RPN(std::string expr);
		int	getResult();
		~RPN();
};

RPN::RPN(std::string expr)
{
	for (size_t i = 0; i < expr.length(); i++)
	{
		int op1, op2;
		if (expr[i] >= '0' && expr[i] <= '9')
			this->st.push(expr[i] - '0');
		else if (expr[i] == '+') {
			if (this->st.size() < 2)
                std::cerr << "Error" << std::endl;
            op1 = st.top();
			this->st.pop();
            op2 = st.top();
			this->st.pop();
            this->st.push(op1 + op2);
		}
		else if (expr[i] == '-') {
			if (this->st.size() < 2)
                std::cerr << "Error" << std::endl;
            op2 = st.top();
			this->st.pop();
            op1 = st.top();
			this->st.pop();
            this->st.push(op1 - op2);
		}
		else if (expr[i] == '*') {
			if (this->st.size() < 2)
                std::cerr << "Error" << std::endl;
            op1 = st.top();
			this->st.pop();
            op2 = st.top();
			this->st.pop();
            this->st.push(op1 * op2);
		}
		else if (expr[i] == '/') {
			if (this->st.size() < 2)
                std::cerr << "Error" << std::endl;
            op2 = st.top();
			this->st.pop();
            op1 = st.top();
			this->st.pop();
			if (op2 == 0)
				std::cerr << "Error div by 0" << std::endl;
            this->st.push(op1 / op2);
		}
	}
	if (st.size() != 1)
        std::cerr << "Error: Invalid expression" << std::endl;
}

int	RPN::getResult() {
	return this->st.top();
}

RPN::~RPN()
{
}


#endif
