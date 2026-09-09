#include<iostream>

using namespace std;

void ReadNumber(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "please enter 3 Marks?\n";
	cin >> Mark1 >> Mark2 >> Mark3;
}


int CalculateSum(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return float(CalculateSum(Mark1, Mark2, Mark3)) / 3;
}

void PrintAverage(float Average)
{
	cout << "average=" << Average << endl;
}

int main()
{
	int Mark1, Mark2, Mark3;


	ReadNumber(Mark1, Mark2, Mark3);

	PrintAverage(CalculateAverage(Mark1, Mark2, Mark3));


	return 0;
}