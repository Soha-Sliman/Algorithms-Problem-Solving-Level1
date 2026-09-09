#include<iostream>
#include<string>

using namespace std;

int ReadNumber()
{
	int Num;
	cout << "please enter a Number?\n";
	cin >> Num;
	return Num;
}

float CalculateHalfNumber(int Num)
{
	return (float)Num / 2;
}

void PrintNumber(int Num)
{
	cout << "\n half of " << Num << " is: " << CalculateHalfNumber(Num) << endl;
	//cout << "half of "+ to_string(Num) + " is: " + to_string(CalculateHalfNumber(Num)) << endl;
}

int main()
{
	PrintNumber(ReadNumber());
	return 0;
}
