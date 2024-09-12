#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,3,2,2,2,4,5,6};// inititalization of vector
    cout<<"the value that will be deleted : ";
    int val;
    cin>> val;
    int j=0;// this will give a variable to be zero
    for(int i=0;i<nums.size();i++){
        if (nums[i]!=val){// if the iterative element is not matching with val then
            nums[j]=nums[i];// copy those element to j
            j++; //then increment j

        }
    
    }
    for(auto x: nums){
        cout<<x;
    }
    return 0;
}