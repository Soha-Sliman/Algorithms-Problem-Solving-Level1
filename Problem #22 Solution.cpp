#include<iostream>
#include<cmath>

using namespace std;

void ReadInfo(float& a, float& b)
{
	cout << "please enter triangle sides a and b?\n ";
	cin >> a >> b;
}

float CalculateCircleAreaByTriangle(float a, float b)
{
	const float PI = 3.14;
	float Area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return Area;
}

void PrintResult(float Area)
{
	cout << "Circle Area= " << Area << endl;
}

int main()
{
	float a, b;
	ReadInfo(a, b);
	PrintResult(CalculateCircleAreaByTriangle(a, b));
	return 0;
}