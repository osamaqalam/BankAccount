/*
 * CheckingAccount.h
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_


#include "Account.h"

class CheckingAccount : public Account
{
private:
	double transactionFee;

public:
	CheckingAccount(double bal, double fee);
	void credit (double credit);
	void debit (double debit);
};


#endif /* CHECKINGACCOUNT_H_ */
