//This code can be modified later for other purposes//
#include<iostream>
#include<string>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}

float TotalMonths(float LoanAmount, float MonthlyPayment)
{
	return LoanAmount / MonthlyPayment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter loan amount? ");
	float MonthlyPayment = ReadPositiveNumber("Please enter monthly payment? ");
	cout << "Months to pay loan = " << TotalMonths(LoanAmount, MonthlyPayment) << " Months" << endl;
	return 0;
}
