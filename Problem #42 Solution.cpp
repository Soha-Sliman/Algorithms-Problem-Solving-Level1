#include<iostream>

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

stTaskDuration ReadTaskDuration()
{
	stTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadNumbers("please enter number of days? ");
	TaskDuration.NumberOfHours = ReadNumbers("please enter number of hours?");
	TaskDuration.NumberOfMinutes = ReadNumbers("please enter number of minutes?");
	TaskDuration.NumberOfSeconds = ReadNumbers("please enter number of seconds?");
	return TaskDuration;
	
}

float TaskDurationInSeconds(stTaskDuration TaskDuration)
{
	float DurationInSeconds = 0;

DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
DurationInSeconds += TaskDuration.NumberOfSeconds;

cout << "Task duration in seconds: ";
return DurationInSeconds;
}

int main()
{
	cout  << TaskDurationInSeconds(ReadTaskDuration());
	return 0;
}
