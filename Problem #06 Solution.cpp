#include<iostream>

using namespace std;

struct  stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo()
{
	stInfo info;

	cout << "please enter your first name? " << endl;
	cin >> info.FirstName;

	cout << "please enter your last name? " << endl;
	cin >> info.LastName;

	return info;
}
//string GetFullName(stInfo info , bool Reversed)// طباعة معكوس الاسم
//{
	//string FullName = "";
	//if (Reversed)
	
	//	FullName = info.LastName + " " + info.FirstName;
	
	//else
	
		//FullName = info.FirstName + " " + info.LastName;
	
	//return FullName;
//}

string GetFullName(stInfo info)
{
	return info.FirstName + " " + info.LastName;
}

//void PrintInfo(string fullName)// طريقة 1
//{
//	cout << "\n your full name is: " << fullName<< endl;
//}


void PrintInfo(stInfo info)
{
	//cout << "\n your full name is: " << GetFullName(info, true) << endl;//لطريقة المعكوس
	cout << "\n your full name is: " << GetFullName(info) << endl;
}

int main()
{
	//PrintInfo(GetFullName(ReadInfo()));
	PrintInfo(ReadInfo());
	return 0;
}
