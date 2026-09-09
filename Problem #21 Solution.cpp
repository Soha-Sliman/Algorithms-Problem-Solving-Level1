#include<iostream>
#include<cmath>

using namespace std;

float ReadInfo()
{
	float l;
	cout << "please enter circumference\n";
	cin >> l;
	return l;
}

float CalculateCircleAreaAlongTheCircumference(float l)
{
	const float PI = 3.14;
	return pow(l, 2) / (4 * PI);
}

void PrintResult(float Area)
{
	cout << "Circle Area= " << Area << endl;
}

int main()
{
	PrintResult(CalculateCircleAreaAlongTheCircumference(ReadInfo()));
	return 0;
}