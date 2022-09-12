//
// Created by user on 12.09.22.
//

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	return;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount = _totalAmount + this->_amount;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return;
}

void	Account::_displayTimestamp(void)
{
	time_t rawtime = time (&rawtime);
	struct tm *timeinfo = localtime (&rawtime);

	std::cout << "[" << timeinfo->tm_year + 1900 << timeinfo->tm_mon << timeinfo->tm_mday << "_" << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "]";
}

int	Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}


