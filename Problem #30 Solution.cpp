#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message)//This function is used as a general function//
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

int Factorial(int N)
{
	int F = 1;
	for (int i = 1; i <=N ; i++)
	{
		F *= i;
	}
	return F;
}

int main()
{
	cout << Factorial(ReadPositiveNumber("Enter N? ")) << endl;

	return 0;

}