/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:29:55 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/27 18:51:55 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer,80,"[%Y%m%d_%H%M%S] ",timeinfo);
	std::cout << buffer;
}

Account::~Account(void)
{
	// _displayTimestamp();
	// std::cout << "index:" << _accountIndex;
	// std::cout << ";amount:" << _amount;
	// std::cout << ";closed" << std::endl;
}

Account::Account(int initial_deposit)
{
	static int i = 0;

	this->_accountIndex = i;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	this->_amount = initial_deposit;
	if (_totalAmount == 0)
		_totalAmount = initial_deposit;
	else
		_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	i++;
}

int		Account::getNbAccounts( void ){ return _nbAccounts; }
int		Account::getTotalAmount( void ){ return _totalAmount; }
int		Account::getNbDeposits( void ){ return _totalNbDeposits; }
int		Account::getNbWithdrawals( void ){ return _totalNbWithdrawals; }

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals <<std::endl;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" <<  _amount;
	std::cout << ";deposit:" << deposit;

	_amount += deposit;
	Account::_totalNbDeposits++;
	_nbDeposits++;

	std::cout <<  ";amount:" <<  _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

// bool	Account::makeWithdrawal( int withdrawal )
// {

// }