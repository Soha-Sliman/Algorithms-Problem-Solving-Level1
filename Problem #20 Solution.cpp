#include<iostream>
#include<cmath>

using namespace std;

float ReadInfo()
{
	float A;
	cout << "please enter square side A?\n ";
	cin >> A;
	return A;
}

float CalculateCircleAreaInscribedInSquare(float A)
{
	const float PI = 3.14;
	return (PI * pow(A, 2)) / 4;

}

void PrintResult(float Area)
{
	cout << "Circle Area= " << Area << endl;
}

int main()
{
	PrintResult(CalculateCircleAreaInscribedInSquare(ReadInfo()));
	return 0;
}