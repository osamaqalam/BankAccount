/*
 * Account.cpp
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#include "Account.h"

Account::Account (double bal)
{
	if (bal >= 0)
		balance = bal;
	else
	{
		balance = 0;
		cerr << "The initial balance is invalid";
	}
}

void Account::credit (double credit)
{
	if (credit > 0)
		balance += credit;
}
void Account::debit (double debit)
{
	if (debit <= balance)
		balance -= debit;
	else
		cerr << "Debit amount exceeded account balance";
}
