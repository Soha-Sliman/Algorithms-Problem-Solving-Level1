#include<iostream>

using namespace std;

struct stInfo
{
	int age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};
stInfo ReadInfo()
{
	stInfo Info;

	cout << "please enter your age? " << endl;
	cin >> Info.age;

	cout << " do you have driver license? " << endl;
	cin >> Info.HasDrivingLicense;

	cout << " do you have recommendation? " << endl;
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true;
	}
	else
	{
		return (Info.age > 21 && Info.HasDrivingLicense);
	}
}

void PrintInfo(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n Hired " << endl;
	else
		cout << "\n Rejected " << endl;

}

int main()
{
	PrintInfo(ReadInfo());

	return 0;
}