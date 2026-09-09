#include<iostream>

using namespace std;

enum enPassFail { Pass=1, Fail=2 };

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

enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(float Average)
{
	cout << "\n your average is: " << Average << endl;
	if (CheckAverage(Average) ==enPassFail::Pass)
		cout << "you are Passed\n";
	else
		cout << "you are Failed\n";
}

int main()
{
	int Mark1, Mark2, Mark3;


	ReadNumber(Mark1, Mark2, Mark3);

	PrintResults(CalculateAverage(Mark1, Mark2, Mark3));


	return 0;
}