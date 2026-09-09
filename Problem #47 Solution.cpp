#include<iostream>
#include<string>

using namespace std;

struct stLoanInfo { float LoanAmount, MonthlyPayment; };

stLoanInfo ReadLoanInfo()
{
	stLoanInfo LoanInfo;
	cout << "Please enter loan amount? ";
	cin >> LoanInfo.LoanAmount;
	cout << "Please enter monthly payment? ";
	cin >> LoanInfo.MonthlyPayment;
	return LoanInfo;
}	

float CalculateMonthsToPayLoan(stLoanInfo LoanInfo)
{
	cout << "Months to pay loan = ";
	return LoanInfo.LoanAmount / LoanInfo.MonthlyPayment;
}

int main()
{
	cout << CalculateMonthsToPayLoan(ReadLoanInfo()) << " Months" << endl;
	return 0;
}
