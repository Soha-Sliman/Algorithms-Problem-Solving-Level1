#include<iostream>

using namespace std;

void ReadNumber(int& Num1, int& Num2)
{
	cout << "please enter Num1\n ";
	cin >> Num1;
	cout << "please enter Num2\n ";
	cin >> Num2;
}

void SwapNumbers(int& Num1, int& Num2)
{
	int Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}

void PrintResults(int Num1, int Num2)
{
	cout << "\n number1= " << Num1 << endl;
	cout << "\n number2= " << Num2 << endl;
}

int main()
{
	int A, B;
	ReadNumber(A, B);
	PrintResults(A, B);
	SwapNumbers(A, B);
	PrintResults(A, B);
	return 0;
}