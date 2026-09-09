#include<iostream>
#include<string>

using namespace std;

string ReadName()
{
	string Name;
	cout << "please enter your name ?\n";
	getline(cin, Name);
	return Name;
}

void PrintName(string Name)
{
	cout << "your Name is :" << Name << endl;
}

int main()
{
	PrintName(ReadName());
	return 0;
}
