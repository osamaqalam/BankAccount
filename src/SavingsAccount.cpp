/*
 * SavingsAccount.cpp
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double bal, double interest)
: Account (bal)
{
	if (interest > 0)
		interestRate = interest;
	else
		interestRate = 0;
}

double SavingsAccount::calculateInterest ()
{
	return getBalance() * interestRate;
}
