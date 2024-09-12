/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

*/
#include<bits/stdc++.h>
using namespace std;
int product(vector<int> nums, int n) {
    if (n < 4) {
        return 0; // Handle cases where there are not enough elements
    }
    int pro = 1;
    for (int i = 0; i < n - 3; i++) {
        pro =  (nums[i] * nums[i + 1] * nums[i + 2] * nums[i + 3])/nums[i];
    }
    return pro;
}
 

int main(){
vector<int> nums={1,2,3,4};
int n= nums.size();
cout<<product(nums,n)<<endl;
cout<<product(nums,n)<<endl;
cout<<product(nums,n)<<endl;
cout<<product(nums,n)<<endl;
// for(int i=0;i<n;i++){
//     cout<<nums[i]<<" ,";
// }
    return 0;
}

/*Input: nums = [1,2,3,4]
Output: [24,12,8,6]*/