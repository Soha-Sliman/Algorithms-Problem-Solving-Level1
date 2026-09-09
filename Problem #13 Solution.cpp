#include<iostream>

using namespace std;

void ReadNumber(int& Num1, int& Num2, int &Num3)
{
	cout << "please enter Num1\n ";
	cin >> Num1;

	cout << "please enter Num2\n ";
	cin >> Num2;

	cout << "please enter Num3\n ";
	cin >> Num3;
}

int CheckMaxOf3Num(int Num1, int Num2, int Num3)
{

	if (Num1 > Num2)
	{
		if (Num1 > Num3)
			return Num1;
		else
			return Num3;
	}
	else 
	{
		if (Num2 > Num3)

			return Num2;
		else
			return Num3;
	}
}

void PrintResults(int Max)
{
	cout << "\n the maximum num is: " << Max << endl;
}

int main()
{
	int Num1, Num2, Num3;
	ReadNumber(Num1, Num2, Num3);
	PrintResults(CheckMaxOf3Num(Num1, Num2, Num3));

	return 0;
}