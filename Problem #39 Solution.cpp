#include<iostream>
#include<string>

using namespace std;	

struct stBillCashPaid
{
	float TotalBill, CashPaid;
};

stBillCashPaid ReadBillCashPaid()
{
	stBillCashPaid BillCashPaid;
	cout << "please enter total bill? " << endl;
	cin >> BillCashPaid.TotalBill;
	cout << "please enter cash paid? " << endl;
	cin >> BillCashPaid.CashPaid;
	return BillCashPaid;
}

float CalculateRemainder(stBillCashPaid BillCashPaid)
{
	return BillCashPaid.CashPaid - BillCashPaid.TotalBill;
}

int main()
{
	stBillCashPaid BillCashPaid = ReadBillCashPaid();
	cout << "Remainder= " << CalculateRemainder(BillCashPaid) << endl;
	return 0;
}