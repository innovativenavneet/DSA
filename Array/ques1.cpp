#include<bits/stdc++.h>
using namespace std;
int closestSum(vector<int> arr, int x) {
    int n = arr.size();
    int closest = INT_MAX;

    // Loop to calculate closest sum
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if ((sum - x) < (closest - x)) {
                closest = sum;
            }
        }
    }

    return closest;
}


int main()
{
    vector<int> arr={10, 22, 28, 29, 30, 40};
    int x = 54;
    cout<<closestSum(arr,x);


    return 0;
}