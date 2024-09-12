#include <bits/stdc++.h>
using namespace std;
/*printig the reverse order*/

void reverse(char string[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(string[s++], string[e--]);
    }
}

/*printing the length of array*/
int getlength(char string[])
{                  // we don't pass the size of array in string
    int count = 0; // this will count the length
    for (int i = 0; string[i] != '\0'; i++)
    { // jb tk null character nhi aa rha tbtk iterate krwa rhe h
        count++;
    }
    return count;
}

int main()
{
    char string[20]; // this will let you enter 20 sized string with sequence character (without space)
    cout << "enter your names: ";
    cin >> string;
    string[2] = '\0'; // storing null character at index

    cout << "your name is : ";

    cout << string << endl;
    int n = getlength(string);
    cout << "the length is " << n << endl; // calling the function

    reverse(string, n);
    cout << "the given sting in reverse order: ";
    cout << string;

    return 0;
}