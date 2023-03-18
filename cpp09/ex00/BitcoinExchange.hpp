/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:02:04 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/18 16:46:56 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include<iostream>
# include<fstream>
# include<string>
# include<map>
# include<list>
# include <time.h>

std::string	trim(std::string s, std::string set)
{
    s.erase(0, s.find_first_not_of(set));
    s.erase(s.find_last_not_of(set) + 1);
    return (s);
}

std::list<std::string>	split(std::string s, std::string delimiter) {
    std::list<std::string>	result;
    size_t					pos = 0;
    std::string				token;

	if (delimiter.empty())
		throw std::invalid_argument("delimiter cannot be an empty string.");
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        result.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    result.push_back(s);
    return (result);
}
#endif
