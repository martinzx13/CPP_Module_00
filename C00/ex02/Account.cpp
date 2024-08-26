#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

// Initialization of the variables.

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Creation of the constructor.

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _totalAmount += _amount;
    _accountIndex += _nbAccounts;
    _displayTimestamp();

    std::cout
        << "index:" << _accountIndex << ";"
        << "amount:" << _amount << ";"
        << "created" << std::endl;
}

// Creation of the destructor.

Account::~Account()
{
    _displayTimestamp();
    std::cout
        << "index:" << _accountIndex << ";"
        << "amount:" << _amount << ";"
        << "closed" << std::endl;
}

// Create helper funcitons.

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

int Account::checkAmount(void) const
{
    return (_amount);
}

void Account::_displayTimestamp(void)
{
    std::time_t _time = std::time(NULL);
    std::tm *current = std::localtime(&_time);

    std::cout << "[" << (current->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (current->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << (current->tm_mday) << "_"
              << std::setw(2) << std::setfill('0') << (current->tm_hour)
              << std::setw(2) << std::setfill('0') << (current->tm_min)
              << std::setw(2) << std::setfill('0') << (current->tm_sec)
              << "] ";
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
              << "total:" << getTotalAmount() << ";"
              << "deposits:" << getNbDeposits() << ";"
              << "withdrawals:" << getNbWithdrawals() << ";" << std::endl;
}
void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    _totalAmount += deposit;
    _amount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits++;

    std::cout << "index:" << _accountIndex << ";"
              << "p_amount:" << (_amount - deposit) << ";"
              << "deposit :" << deposit << ";"
              << "amount:" << _amount << ";"
              << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";"
                  << "p_amount:" << _amount << ";"
                  << "Withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << "index:" << _accountIndex << ";"
                  << "p_amount:" << _amount + withdrawal << ";"
                  << "withdrawal:" << withdrawal << ";"
                  << "amount:" << _amount << ";"
                  << "nb_withdrawal:" << _nbWithdrawals << std::endl;
    }
    return (true);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "deposits:" << _nbDeposits << ";"
              << "withdrawals:" << _nbWithdrawals << std::endl;
}