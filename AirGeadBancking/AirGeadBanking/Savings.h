//Savings.h contain will contruct our program

//Necessary Information 
#ifndef SAVINGS_H_
#define SAVINGS_H_ 

class money{
	public:
		money(double initialDeposit, double mothlyDeposit, double interestRate, int yearsTime);
		virtual ~money();
		void noMontlhy();
		void yesMonthly();

	private:
		double firstDeposit;
		double monthDeposit;
		double interest;
		int numYears;

};

#endif

