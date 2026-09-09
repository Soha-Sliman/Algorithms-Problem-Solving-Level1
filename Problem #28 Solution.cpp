#include<iostream>

using namespace std;

enum enOddEven{Odd = 1,Even = 2};

int ReadNumber()
{
	int Number;
	cout << "Please enter a number?\n ";
	cin >> Number;
	return Number;
}

enOddEven CheckOddOrEven(int Number)
{
	if (Number % 2 == 0)
		return enOddEven::Even;
	else
		return enOddEven::Odd;
}

int SumOfOddNumbersFrom1ToN_UsingWhile(int N)
{
	int i = 1;
	int Sum = 0;
	while (i <= N)
	{
		if (CheckOddOrEven(i) == enOddEven::Odd)
			Sum += i;
		i++;
	}
	return Sum;
}

int SumOfOddNumbersFrom1ToN_UsingDoWhile(int N)
{
	int i = 1;
	int Sum = 0;

	do
	{
		if (CheckOddOrEven(i) == enOddEven::Odd)
			Sum += i;
		i++;
	} while (i <= N);
	return Sum;
}

int SumOfOddNumbersFrom1ToN_UsingFor(int N)
{
	int Sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (CheckOddOrEven(i) == enOddEven::Odd)
		{
			Sum += i;
		}
			
	}
	return Sum;
}

int main()
{
	int N = ReadNumber();

	cout << "Sum of Odd Numbers from 1 to " << N << " = " << SumOfOddNumbersFrom1ToN_UsingWhile(N) << endl;

	cout << "Sum of Odd Numbers from 1 to " << N << " = " << SumOfOddNumbersFrom1ToN_UsingDoWhile(N) << endl;

	cout << "Sum of Odd Numbers from 1 to " << N << " = " << SumOfOddNumbersFrom1ToN_UsingFor(N) << endl;



	return 0;
}