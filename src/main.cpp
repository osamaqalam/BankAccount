/*
 * main.cpp
 *
 *  Created on: Jul. 18, 2020
 *      Author: Osama
 */

#include "Account.h"


int main ()
{
	Account acc (1000);

	cout << acc.getBalance() << endl;
	acc.credit(300);
	cout << acc.getBalance() << endl;

}
