#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int arr[] = {23, 45, 32, 67, 34};
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "\nThe sum of array elements using for loop is: " << sum;

    return 0;
}