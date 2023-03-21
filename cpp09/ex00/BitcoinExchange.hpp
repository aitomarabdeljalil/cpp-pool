/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:02:04 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/21 16:13:14 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include<iostream>
# include<fstream>
# include<string>
# include<map>
# include<list>
# include<time.h>
# include <cmath>

std::string				trim(std::string s, std::string set);
std::list<std::string>	split(std::string s, std::string delimiter);
time_t					hundelTime(std::string str);
float					hundelFloat(std::string str);
std::map<time_t, float>	dbList(std::string path);
void					hundelLine(std::string line, const std::map<time_t, float>& mysql);

#endif
