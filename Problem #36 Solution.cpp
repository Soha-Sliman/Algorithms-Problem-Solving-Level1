#include<iostream>
#include<string>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)// This function  is used as a general function //
{
	float Number;
	cout << Message << endl;
	cin >> Number;
	return Number;
}

enOperationType ReadOperationType()
{
	char OperationType;
	cout << "Please enter operation type (+, -, *, /)?\n ";
	cin >> OperationType;
	return (enOperationType)OperationType;
}

float Calculate(float Number1, float Number2, enOperationType OperationType)
{
	switch (OperationType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		cout << "Invalid operation type" << endl;
		return 0;
	}
}

int main()
{
	float Number1 = ReadNumber("Please enter first number?");
	float Number2 = ReadNumber("Please enter second number?");
	//float Number3 = ReadNumber("Please enter third number?");
	enOperationType OperationType = ReadOperationType();
	cout << "Result= " << Calculate(Number1, Number2, OperationType) << endl;
	return 0;
}

