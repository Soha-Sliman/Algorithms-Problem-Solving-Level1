#include<iostream>

using namespace std;
enum enNumberType { odd = 1, even = 2 };

int ReadNumber()
{
	int Num;
	cout << "please enter Number?\n";
	cin >> Num;
	return Num;
}

enNumberType CheckNumber(int Num)
{
	int Result = Num % 2;
	if (Result == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}

void PrintNumber(enNumberType NumberType)
{
	if (NumberType == enNumberType::even)
		cout << "\n number is even \n";
	else
		cout << "\n number is odd \n";
}


int main()
{
	PrintNumber(CheckNumber(ReadNumber()));

	return 0;
}