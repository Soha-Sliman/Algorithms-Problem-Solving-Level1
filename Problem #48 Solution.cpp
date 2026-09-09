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

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
	return LoanAmount / HowManyMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter loan amount? ");
	float HowManyMonths = ReadPositiveNumber("Please enter how many months? ");

	cout << "Monthly installment = " << MonthlyInstallment(LoanAmount, HowManyMonths)  << endl;
	return 0;
}