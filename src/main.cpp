/*
 * main.cpp
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#include "Account.h"
#include "SavingsAccount.h"


int main ()
{
	Account acc (1000);
	SavingsAccount sAcc(1000,0.1);

	cout << sAcc.calculateInterest() << endl;


}
