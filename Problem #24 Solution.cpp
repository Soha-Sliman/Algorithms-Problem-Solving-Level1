#include<iostream>
#include<string>

using namespace std;

int ReadAge()
{
	int age;
	cout << "Please enter your age:\n ";
	cin >> age;
	return age;
}

bool ValidateNumberInRange(int Number, int From, int To)// This function is used as a general function //
{
	return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age\n";
	else
		cout << Age << " is not a valid age\n";
}

int main()
{
	PrintResult(ReadAge());
	return 0;
}