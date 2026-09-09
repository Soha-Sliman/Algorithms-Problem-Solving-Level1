#include<iostream>
#include<string>

using namespace std;

struct stPiggyBankContent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "please enter a total pennies? " << endl;
	cin >> PiggyBankContent.Pennies;

	cout << "please enter a total nickels? " << endl;
	cin >> PiggyBankContent.Nickels;

	cout << "please enter a total dimes? " << endl;
	cin >> PiggyBankContent.Dimes;

	cout << "please enter a total quarters? " << endl;
	cin >> PiggyBankContent.Quarters;

	cout << "please enter a total dollars? " << endl;
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	int TotalPennies = (PiggyBankContent.Pennies * 1) + (PiggyBankContent.Nickels * 5) + (PiggyBankContent.Dimes * 10) + (PiggyBankContent.Quarters * 25) + (PiggyBankContent.Dollars * 100);
	return TotalPennies;
}

int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
	cout << "Total Pennies= " << TotalPennies << endl;
	cout << "Total Dollars= " << float(TotalPennies) / 100.0 << endl;
	return 0;
}