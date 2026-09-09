#include <iostream>

using namespace std;


string ReadPinCode()
{
    string PinCode;

    cout << "Please enter PIN code \n";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
	int count = 3; // Number of allowed attempts
    do
    {
        PinCode = ReadPinCode();
        count--; // Decrement the attempt count

        if (PinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN\n";
            system("color 4F");
        }

    } while (count >= 1 && PinCode != "1234");

    return false;
}


int main()
{


    if (Login())
    {
        system("color 2F"); 
        cout << "\nYour account balance is " << 7500 << '\n'; 
    }
    else
    {
		cout << "\nYour card blocked call the bank for help.\n";
    }

    return 0; 
}