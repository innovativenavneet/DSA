#include <bits/stdc++.h>
using namespace std;
int getlength(char string[])
{                  // we don't pass the size of array in string
    int count = 0; // this will count the length
    for (int i = 0; string[i] != '\0'; i++)
    { // jb tk null character nhi aa rha tbtk iterate krwa rhe h
        count++;
    }
    return count;
}
bool panidrome(char string[], int n)
{
    int s = 0;     // starting the first index
    int e = n - 1; // this will point to end index
    while (s <= e)
    {
        if (string[s] != string[e])
        {
            return false;
        }
        if (string[s] = string[e])
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    char string[] = {'a', 'b', 'c', 'b', 'b'};
    int n = getlength(string);
    cout << panidrome(string, n);

    return 0;
}