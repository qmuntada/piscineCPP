
#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
		this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
		this->_amount << ";closed" << std::endl;
	return ;
}

int				Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int				Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int				Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int				Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void			Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:"
		<< Account::getTotalAmount() << ";deposits:" <<
		Account::getNbDeposits() << ";withdrawals:" <<
		Account::getNbWithdrawals() << std::endl;
}

void			Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
		this->_amount;
	this->_amount += deposit;

	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;

	this->_nbDeposits += 1;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool			Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
		this->_amount;

	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}

	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" <<
		this->_nbWithdrawals << std::endl;

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
}

int				Account::checkAmount(void) const
{
	return (this->_amount);
}

void			Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
		this->_amount << ";deposits:" << this->_nbDeposits <<
		";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void		Account::_displayTimestamp(void)
{
	time_t		cur_time = time(NULL);
	struct tm	*local_t = localtime(&cur_time);
	char		time_dis[32];

	strftime(time_dis, sizeof(time_dis), "[%Y%d%m_%H%M%S] ", local_t);
	std::cout << time_dis;
}

int				Account::_nbAccounts = 0;
int				Account::_totalAmount = 0;
int				Account::_totalNbDeposits = 0;
int				Account::_totalNbWithdrawals = 0;
