#include<iostream>

using namespace std;

void ReadNumber(int& Num1, int& Num2)
{
	cout << "please enter Num1\n ";
	cin >> Num1;

	cout << "please enter Num2\n ";
	cin >> Num2;
}

int CheckMaxOf2Num(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintResults(int Max)
{
	cout << "\n the maximum num is: " << Max << endl;
}

int main()
{
	int Num1, Num2;
	ReadNumber(Num1, Num2);
	PrintResults(CheckMaxOf2Num(Num1, Num2));

	return 0;
}