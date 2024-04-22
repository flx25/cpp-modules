/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-nag <fvon-nag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:10:32 by fvon-nag          #+#    #+#             */
/*   Updated: 2023/09/07 11:10:26 by fvon-nag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";"
        << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}


Account::Account(int initial_deposit) {
    this->_amount = initial_deposit;
    _totalAmount += initial_deposit;
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";" << "amount:"
              << _amount << ";" << "created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";" << "amount:"
              << _amount << ";" << "closed" << std::endl;

}

void	Account::makeDeposit( int deposit )
{
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;


    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";" << "p_amount:" << _amount - deposit << ";deposit:"
    << deposit  << ";amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > this->_amount)
    {
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";" << "p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return (1); //maybe switch 0 and 1
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";" << "p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal <<
    ";amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return(0);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";" << "amount:"
        << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;

}


void	Account::_displayTimestamp( void )
{
    std::time_t currentTime;
    std::time(&currentTime);

    const int bufferSize = 80;
    char buffer[bufferSize];

    std::strftime(buffer, bufferSize, "%Y%m%d_%H%M%S", std::localtime(&currentTime));

    std::cout << "[" << buffer << "]" ;

}