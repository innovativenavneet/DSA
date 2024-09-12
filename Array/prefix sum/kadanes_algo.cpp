#include <iostream>
using namespace std;

int kadane(int arr[], int n)
{
    int cs = 0;
    int ms = arr[0];
    for (int i = 0; i < n; i++)
    {
        cs += arr[i];
        // why this if statement i don't understand
        /*The if statement (if (cs < 0) cs = 0;) resets the current sum (cs) when it becomes negative.
        This is done because a negative current sum would decrease the value of any future subarrays,
         so it's better to start fresh from the next element.*/

        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(ms, cs);
    }

    return ms;
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << kadane(arr, n) << endl;

    return 0;
}
