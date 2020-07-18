/*
 * main.cpp
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"



int main ()
{
	Account acc (1000);
	SavingsAccount sAcc(2000,0.1);
	CheckingAccount cAcc (3000, 5);
	double interest = sAcc.calculateInterest();

	cout << "Original savings account's balance = " << sAcc.getBalance() << endl;
	sAcc.credit(interest);
	cout << "Savings account's balance after interest = " << sAcc.getBalance() << "\n\n";

	cout << "Original checking account's balance = " << cAcc.getBalance() << endl;
	cAcc.debit(500);
	cout << "Checking account's balance after withdrawal = " << cAcc.getBalance() << endl;


}
