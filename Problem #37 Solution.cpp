#include<iostream>
#include<string>

using namespace std;

float ReadNumbers(string Message)
{
	float Number;
	cout << Message << endl;
	cin >> Number;
	return Number;
}

float SumNumbers()
{
	int sum = 0, Number = 0, Counter = 1;
	do {
		Number = ReadNumbers(" please enter Number " + to_string(Counter));
		if (Number == -99)
		{
			break;
		}

		sum += Number;
		Counter++;

    } while (Number != -99);
	
	cout << "Result = ";

	return sum;
}

int main()
{
	cout << SumNumbers() << endl;

	return 0;
}