#include<iostream>
#include<cmath>

using namespace std;

void ReadInfo(float& diagonal, float& side)
{
	cout << "please enter diagonal?\n";
	cin >> diagonal;
	cout << "please enter side?\n";
	cin >> side;
}

float CalculateRectangleAreaBySideAndDiagonal(float diagonal, float side)
{
	return float(side * sqrt(pow(diagonal, 2) - pow(side, 2)));
}

void PrintResults(float Area)
{
	cout << " Rectangle Area=" << Area << endl;
}	

int main()
{
	float d, s;
	ReadInfo(d, s);
	PrintResults(CalculateRectangleAreaBySideAndDiagonal(d, s));

	return 0;
}
