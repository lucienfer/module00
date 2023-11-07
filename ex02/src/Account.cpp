#include "../Account.hpp"
#include <iostream>
#include <time.h>
#include <ctime>
#include <iomanip>

void    Account::_displayTimestamp(void) {
	std::time_t rawtime;
	struct tm	*timeinfo;
	char		buffer[16];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 16, "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buffer << "] ";
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _nbAccounts += 1;
    _displayTimestamp();
    _totalAmount += _amount;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int  Account::getNbAccounts(void) {
    return _nbAccounts;
}

int  Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}
 
int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit" << deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _amount += deposit;
    _nbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal) {
    if (withdrawal <= _amount) {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _amount -= withdrawal;
        _nbWithdrawals++;
        std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    else {
        _displayTimestamp();
         std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused"<< std::endl;
    }
    return (true);
}

int Account::checkAmount(void) const {
    return _amount;
}

void    Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;
