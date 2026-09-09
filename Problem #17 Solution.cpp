#include<iostream>
#include<cmath>

using namespace std;

void ReadInfo(float& Base, float& Height)
{
	cout << "please enter Base?\n";
	cin >> Base;
	cout << "please enter Height?\n";
	cin >> Height;
}

float CalculateTriangleArea(float Base, float Height)
{
	return 0.5 * Base * Height;
}

void PrintResults(float Area)
{
	cout << " Triangle Area=" << Area << endl;
}

int main()
{
	float b, h;
	ReadInfo(b, h);
	PrintResults(CalculateTriangleArea(b, h));
	return 0;
}	