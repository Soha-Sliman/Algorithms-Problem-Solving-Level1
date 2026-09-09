#include<iostream>

using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter a number?\n ";
	cin >> Number;
	return Number;
}

void PrintNumbersFrom1ToN_UsingWhile(int N)
{
	int i = 1;
	cout << "---------------------------------" << endl;
	while (i <= N)
		{
			cout << i << endl;
			i++;
	    }
}

void PrintNumbersFrom1ToN_UsingDoWhile(int N)
{
	int i = 1;
	cout << "---------------------------------" << endl;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= N);
}

void PrintNumbersFrom1ToN_UsingFor(int N)
{
	cout << "---------------------------------" << endl;
	for (int i = 1; i <= N; i++)
		cout << i << endl;
}

int main()
{
	int N = ReadNumber();
	PrintNumbersFrom1ToN_UsingWhile(N);
	PrintNumbersFrom1ToN_UsingDoWhile(N);
	PrintNumbersFrom1ToN_UsingFor(N);
	return 0;
}
