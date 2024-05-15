/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:38:32 by vboxuser1         #+#    #+#             */
/*   Updated: 2024/05/15 11:16:33 by mmughedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(NULL);
	std::tm now = *localtime(&t);
	std::cout
		<< "["
		<< (now.tm_year + 1900)
		<< std::setfill('0')
		<< std::setw(2) << now.tm_mon + 1
		<< std::setw(2) << now.tm_mday << "_"
		<< std::setw(2) << now.tm_hour
		<< std::setw(2) << now.tm_min
		<< std::setw(2) << now.tm_sec
		<< "]";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	pAmount = _amount;
	
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << pAmount << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits <<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool	enough_money = _amount >= withdrawal;
	int		pAmount = _amount;
	
	Account::_displayTimestamp();
	if (enough_money)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << " index:" << _accountIndex << ";p_amount:" << pAmount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals <<std::endl;
	}
	else
		std::cout << " index:" << _accountIndex << ";p_amount:" << pAmount << ";withdrawal:refused" <<std::endl;
	return (enough_money);
}




