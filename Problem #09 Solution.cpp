#include<iostream>

using namespace std;

void ReadNumber(int &Num1, int &Num2, int &Num3)
{
	cout << "please enter 3 numbers?\n";
	cin >> Num1 >> Num2 >> Num3;
}


double CalculateSum(int Num1, int Num2, int Num3)
{
	return double (Num1 + Num2 + Num3);
}

//void PrintSum(int Num1, int Num2, int Num3)//طريقة 1
//{
// 	cout << "sum=" << CalculateSum(Num1, Num2, Num3) << endl;
//}

void PrintSum(double Total)//طريقة 2
{
	cout << "sum=" << Total << endl;
}
int main()
{
	int Num1, Num2, Num3;


	ReadNumber(Num1, Num2, Num3);
	//PrintSum(Num1, Num2, Num3);
	PrintSum(CalculateSum(Num1, Num2, Num3));


	return 0;
}
