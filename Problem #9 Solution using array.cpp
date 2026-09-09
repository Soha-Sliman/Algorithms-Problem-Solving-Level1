#include <iostream>
using namespace std;

void ReadNumbers(int arr[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter Number " << i + 1 << "?\n";
        cin >> arr[i];
    }
}


int SumNumbers(int arr[3])
{
    int Sum = 0;
    for (int i = 0; i < 3; i++)
    {
        Sum += arr[i]; 
    }
    return Sum;
}


void PrintResult(int TotalSum)
{
    cout << "\nThe Total Sum is: " << TotalSum << endl;
}

int main()
{
   
    int arr[3];

   
    ReadNumbers(arr);
    PrintResult(SumNumbers(arr));

    return 0;
}