/*
Student name: Sergio Mateos

Class: CS-210 
This is the main.pp
*/

#include <iostream>
#include "Savings.h"

using namespace std;

int main(){
	double firstDeposit, monthDeposit, interest;
	int numYears;
	while (1) {
		//Head
		cout << "************************************" << endl;
		cout << "**************Data Input************" << endl;
		cout << "Initial investment Amount: " << endl;
		cout << "Monthly Deposit: " << endl;
		cout << "Annual Interest: " << endl;
		cout << "Number of years: " << endl;
		//Print after any key
		system("read -p 'Press any key continue...'var");
		cout << endl;

		//Head
		cout << "*************************************" << endl;
		cout << "***************Data Input************" << endl;
		cout << "Initial investment Amount: $";
		cin >> firstDeposit;
		cout << "Monthly Deposit: $";
		cin >> monthDeposit;
		cout << "Annual Interest: %";
		cin >> interest;
		cout << "Number of years: ";
		cin >> numYears;

		//Printer after press any key
		system("read -p 'Press any key to continue...' var");

		//Save the object based on customer input
		money myMoney = money(firstDeposit, monthDeposit, interest, numYears);
		cout << endl;

		//Display the noMonthly fuction to print
		myMoney.noMontlhy();
		cout << endl;
		//
		if (monthDeposit > 0) {
			myMoney.yesMonthly();
		}
		
		cout << endl;
	}
	return 0;
}
