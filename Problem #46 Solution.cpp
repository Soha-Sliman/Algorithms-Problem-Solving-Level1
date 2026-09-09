#include<iostream>
#include<string>

using namespace std;

void PrintLettersAToZ()
{
	for (char Letter = 'A'; Letter <= 'Z'; Letter++)
		cout << Letter << endl;
}

int main()
{
	PrintLettersAToZ();
	return 0;
}
