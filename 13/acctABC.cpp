#include <iostream>
#include "acctabc.h"

using std::cout;
using std::ios_base;
using std::endl;
using std::string;

AcctABC::AcctABC(const string &s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}

void AcctABC::Deposit(double amt)
{
	if(amt < 0)
		cout << "Negative deposit not allowed;"
			<<"deposit is cancelled.\n";
	else
		balance += amt;
}

void AcctABC::Withdraw(double amt)
{
	balance -= amt;
}

AcctABC::Formatting AcctABC::SetFormat()const
{
	Formatting f;
	f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
	f.pr = cout.precision(2);
	return f;
}

void AcctABC::Restore(Formatting & f)const
{
	cout.setf(f.flag, ios_base::floatfield);
	cout.precision(f.pr);
}

void Brass::Withdraw(double amt)
{
	if(amt < 0)
		cout << "Withdrawal amount must be positive; withdrawal canceled.\n";
	else if(amt <= balance)
		AcctABC::Withdraw(amt);
	else
		cout << "Withdraw amout of $" << amt 
			<< "exceeds your balace." << endl
			<< "Withdrawal canceled.\n";
}


void Brass::ViewAcct() const
{
	Formatting f = SetFormat();
	cout << "Clinet: " << fullName << endl;
	cout << "Account Number: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;
	Restore(f);
}

BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r):AcctABC(s, an, bal)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}	


BrassPlus::BrassPlus(const  Brass & ba, double ml, double r):AcctABC(ba)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

void BrassPlus::ViewAcct() const
{
	
	Formatting f = SetFormat();
	cout << "Clinet: " << fullName << endl;
	cout << "Account Number: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;
	cout << "Maximum loan: $" << maxLoan << endl;
	cout << "Owed to bank: $" << owesBank << endl;
	cout.precision(3);
	cout << "Loan Rate: " << 100 * rate << "%\n";
	Restore(f);
}



void BrassPlus::Withdraw(double amt)
{

	Formatting f = SetFormat();
	double bal = Balance();
	if(amt <= bal)
		AcctABC::Withdraw(amt);
	else if(amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Finance charge: $" << advance * rate << endl;
		Deposit(advance);
		AcctABC::Withdraw(amt);
	}
	else
		cout << "Credit limit exceeded. Transaction cancelled.\n";
	Restore(f);
}