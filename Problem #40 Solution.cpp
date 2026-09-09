#include<iostream>

using namespace std;

double ReadTotalBill()
{
	double TotalBill;
	cout << "Please enter Total Bill ?\n ";
	cin >> TotalBill;
	return TotalBill;
}

double CalculateTotalBill(double TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;
}

int main()
{
	double TotalBill;
	TotalBill = ReadTotalBill();
	cout << "Total Bill= " << CalculateTotalBill(TotalBill) << endl;
	return 0;
}