/*to reduce the time complexity we use prefix sum instead of brute force because
takes less  time which is  O(n^2)*/

#include <iostream>
using namespace std;
void prefixsum(int *arr, int n, int arrprefix[])
{

    arrprefix[0] = arr[0];
    cout << arrprefix[0];
    cout << "value of arrprefix : ";
    for (int i = 1; i < n; i++)
    {
        arrprefix[i] = arrprefix[i - 1] + arr[i];
        cout << arrprefix[i] << ",";
    }
    cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "end value of arrprefix : " << arrprefix[i] << endl;
    // }
}

int main()
{
    int arr[] = {5, -7, -56, 14, 23, -9, 10};
    int n = sizeof(arr) / sizeof(int);
    cout << "array before prefix sum : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    int arrprefix[n];
    prefixsum(arr, n, arrprefix);
    return 0;
}