#include <iomanip>
#include <iostream>

#include "Savings.h"

using namespace std;


//money::money will set the values for the memeber values
money::money(double initialDeposit, double monthlyDeposit, double interestRate, int yearsTime){
	this->firstDeposit = initialDeposit;
	this->monthDeposit = monthlyDeposit;
	this->interest = interestRate;
	this->numYears = yearsTime;
}
//Destructor
money::~money()
{
}

//noMonthly is a function that print 'Balance and Interest WITHOUT Adittional Monthly Deposit'
void money::noMontlhy() {
	cout << "	Balance and Interest without additional Monthly Deposit" << endl;
	cout << "========================================================================" << endl;

	cout << setw(10) << "Years" << setw(20) << "Year End Balance" << setw(35) << "Year End Earned Ineterest Rate" << endl; // setw(x) will set the parameter of the variables
	cout << "------------------------------------------------------------------------" << endl;

	//Set variables to calculate Ineterest Rate
	int currentYear = 1;
	double yearBalance = this->firstDeposit;
	//Calculate Ineterest Rate
	while (currentYear <= this->numYears) {
		
		double interestEarned;
		interestEarned = yearBalance * this->interest / 100;																						//Calculate ineterest 
		yearBalance = yearBalance + interestEarned;																									//Add to the end of the year balance
		cout << right << setw(8) << currentYear << fixed << setprecision(2) << setw(17) << yearBalance << setw(27) << interestEarned << endl;		//Print the result

		currentYear++;		
	}
}

// yesMontlhy is a fuction that will print 'Balance and Interest WITH Adittional Monthly Deposit'
void money::yesMonthly() {
	//Head 
	cout << "	Balance and Interest with additional Monthly Deposit" << endl;
	cout << "========================================================================" << endl;

	cout << setw(10) << "Years" << setw(20) << "Year End Balance" << setw(35) << "Year End Earned Ineterest Rate" << endl; // setw(x) will set the parameter of the variables
	cout << "------------------------------------------------------------------------" << endl;
	//Calculation Based on the yeart plus ineterest rate calculation
	int currentYear = 1;
	double yearBalance = this->firstDeposit;
	//Compound interest by month
	while (currentYear <= this->numYears){
		int months = 1;
		double interestEarned = 0.0;
		double monthBalance = yearBalance;

		while (months <= 12) {
			double monthInterest;
			monthBalance = monthBalance + this->monthDeposit;					//Add monthly 
			monthInterest = monthBalance * this->interest / (100 * 12);			//Calculate monthly interest
			interestEarned = interestEarned + monthInterest;					// Add the month interets + year interest
			monthBalance = monthBalance + monthInterest;						//Add interst to monthly balance
			months++;

		}			
		yearBalance = monthBalance;																													//The balance after 12 months			
		cout << right << setw(8) << currentYear << fixed << setprecision(2) << setw(17) << yearBalance << setw(27) << interestEarned << endl;		//Print the result
		currentYear++;
	}
}



