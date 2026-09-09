#include<iostream>
#include<string>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark()
{
	int Mark;
	cout << "please enter your mark?\n";
	cin >> Mark;
	return Mark;
}

//bool CheckMark(int Mark)//طريقة 1
//{
// 	return (Mark >= 50);
//}

enPassFail CheckMark(int Mark)//طريقة 2
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}


//void PrintMark(int Mark)// طريقة 1
//{
	//if (CheckMark(Mark))
	//	cout << "\n you passed the exam \n";
	//else
	//	cout << "\n you failed the exam \n";
//}

void PrintMark(int Mark)//طريقة 2
{
	if (CheckMark(Mark)==enPassFail::Pass)
		cout << "\n you passed the exam \n";
	else
		cout << "\n you failed the exam \n";
}



int main()
{
	PrintMark(ReadMark());
	return 0;
}