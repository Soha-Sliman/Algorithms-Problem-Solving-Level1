#include<iostream>

using namespace std;

float ReadNumberOfHours()
{
	float NumberOfHours;
	cout << "Please enter Number of Hours ?\n ";
	cin >> NumberOfHours;
	return NumberOfHours;
}

float CalculateHoursToDays(float NumberOfHours)
{
	return NumberOfHours/24;
}

float CalculateHoursToWeeks(float NumberOfHours)
{
	return NumberOfHours/24/7;
}

float CalculateDaysToWeeks(float NumberOfDays)
{
	return NumberOfDays/7;
}

int main()
{
	float NumberOfHours, NumberOfDays;
	NumberOfHours = ReadNumberOfHours();
	NumberOfDays = CalculateHoursToDays(NumberOfHours);

	cout << "Number of Hours= " << NumberOfHours << endl;
	cout << "Number of Days= " << NumberOfDays << endl;
	cout << "Number of Weeks= " << CalculateHoursToWeeks(NumberOfHours) << endl;
	return 0;
}
	


