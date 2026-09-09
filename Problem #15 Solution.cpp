#include<iostream>

using namespace std;	

void ReadInfo(float& Length, float& Width)
{
	cout << "please enter Length?\n";
	cin >> Length;
	cout << "please enter Width?\n";
	cin >> Width;
}

double CalculateRectangleArea(float Length, float Width)
{
	return double(Length * Width);
}

void PrintArea(double Area)
{
	cout << " Rectangle Area=" << Area << endl;
}

int main()
{
	float Length, Width;
	ReadInfo(Length, Width);
	PrintArea(CalculateRectangleArea(Length, Width));
	return 0;
}