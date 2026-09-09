#include<iostream>
#include<cmath>

using namespace std;

void ReadInfo(float& a, float& b, float& c)
{
	cout << "please enter triangle sides a, b and c?\n ";
	cin >> a >> b >> c;
}

float CalculateCircleAreaByTriangle(float a, float b, float c)
{
	const float PI = 3.14;
	float p = (a + b + c) / 2;
	float Area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
	return Area;
}

void PrintResults(float Area)
{
	cout << "Circle Area= " << Area << endl;
}

int main()
{
	float a, b, c;
	ReadInfo(a, b, c);
	PrintResults(CalculateCircleAreaByTriangle(a, b, c));
	return 0;
}