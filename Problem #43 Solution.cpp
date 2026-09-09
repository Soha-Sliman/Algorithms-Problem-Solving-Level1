#include<iostream>
#include<cmath>
using namespace std;


struct stTaskDuration
{
	float NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

float ReadNumbers(string Message)
{
	float Number;
	cout << Message << endl;
	cin >> Number;
	return Number;
}

stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	stTaskDuration TaskDuration;
	const int SecondsPerDays = 24 * 60 * 60;
	const int SecondsPerHours = 60 * 60;
	const int SecondsPerMinutes = 60;

	int Remainder = 0;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDays);
	Remainder = TotalSeconds % SecondsPerDays;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHours);
	Remainder = Remainder % SecondsPerHours;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
	Remainder = Remainder % SecondsPerMinutes;
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;
}

void PrintTaskDuration(stTaskDuration TaskDuration)
{
	cout << "\n";
	cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
	int TotalSeconds = ReadNumbers("please enter total seconds? ");
	PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));

	return 0;
}