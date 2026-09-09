#include<iostream>
#include<string>

using namespace std;

enum enPrimeNotPrime{Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
	if (Number <= 1)
		return enPrimeNotPrime::NotPrime;

	int counter = 0;
	for (int i = 1; i <= Number; i++)
	{
	
		if (Number % i == 0)
		{
			counter++;
		}
	}
    if (counter == 2)
	{
		return enPrimeNotPrime::Prime;
	}
		
		return enPrimeNotPrime::NotPrime;

}

void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "The number is prime\n";
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "The number is not prime\n";
		break;
	}
}

int main()
{
	PrintNumberType(ReadPositiveNumber("Enter number?"));

	return 0;
}