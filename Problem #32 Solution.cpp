#include<iostream>
#include<cmath>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Enter Number? ";
	cin >> Number;
	return Number;
}

int ReadPower()
{
	int Power;
	cout << "Enter Power? ";
	cin >> Power;
	return Power;
}

int PowerOfM(int Number, int Power)
{
	if (Power == 0)
	{
		return 1;
	}

	int P = 1;
	for (int i = 1; i <= Power; i++)
	{
		P *= Number;
	}
	
	cout << "Power of M= ";
	return P;

}

int main()
{
	cout << PowerOfM(ReadNumber(), ReadPower());
	return 0;

}