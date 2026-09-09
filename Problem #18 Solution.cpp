#include<iostream>
#include<cmath>

using namespace std;

float ReadInfo()
{
	float radius;
	cout << "please enter radius?\n";
	cin >> radius;
	return radius;
}

float CalculateCircleArea(float radius)
{
	const float PI = 3.14;
	return PI * pow(radius, 2);
}

void PrintResults(float Area)
{
	cout << " Circle Area=" << Area << endl;
}	

int main()
{

	PrintResults(CalculateCircleArea(ReadInfo()));

	return 0;
}