/*
 * CheckingAccount.cpp
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double bal, double fee)
: Account (bal)
{
	if (fee > 0)
		transactionFee = fee;
}

void CheckingAccount::credit (double credit)
{
	Account::credit (credit);

	setBalance(getBalance() - transactionFee);

}
void CheckingAccount::debit (double debit)
{
	bool transCompleted = Account::debit (debit);

	if (transCompleted)
		setBalance(getBalance() - transactionFee);

}

