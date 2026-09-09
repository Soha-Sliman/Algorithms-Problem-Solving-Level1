#include<iostream>
#include<cmath>

using namespace std;

float ReadInfo()
{
	float diameter;
	cout << "please enter diameter?\n";
	cin >> diameter;
	return diameter;
}

float CalculateCircleAreaByDiameter(float diameter)
{
	const float pi = 3.14;
	float Area = (pow(diameter, 2) * pi) / 4;
	return Area;
}

void PrintResult(float Area)
{
	cout << "Circle area = " <<Area << endl;
}

int main()
{
	float d;
	PrintResult(CalculateCircleAreaByDiameter(ReadInfo()));

	return 0;
}