/*
 * Account.h
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
using namespace std;

class Account
{
private:
	double balance;

public:
	Account (double bal);
	void credit (double credit);
	bool debit (double debit);
	double getBalance() {return balance;}
	void setBalance(double bal) {balance = bal;}
};



#endif /* ACCOUNT_H_ */
