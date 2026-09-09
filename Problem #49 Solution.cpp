#include<iostream>
#include<string>

using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "Please enter pin code?\n ";
	cin >> PinCode;
	return PinCode;
}

void Login()
{
	string PinCode;
	do
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			cout << "Your Balance is:" << 7500 << endl;
			return;
		}

		else
		{
			cout << "Wrong PIN\n";
			cout << endl;
		}
	} while (PinCode != "1234");
}

int main()
{
	Login();

	return 0;
}