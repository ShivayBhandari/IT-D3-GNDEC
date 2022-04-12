#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i;
    int arr[] = {23, 45, 32, 67, 34};
    do
    {
        sum = sum + arr[i];
        i++;
    } while (i < 5);
    cout << "\nThe sum of array elements using do while loop is: " << sum;
    return 0;
}