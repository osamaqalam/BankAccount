/*
 * SavingsAccount.h
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include "Account.h"

class SavingsAccount : public Account
{
private:
	double interestRate;

public:
	SavingsAccount(double bal, double interest);
	double calculateInterest ();
};


#endif /* SAVINGSACCOUNT_H_ */
