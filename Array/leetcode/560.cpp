/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum1(vector<int>& nums, int k) {
        int cs=0;
        int ms=0;
        // unordered_map<int,int> mapp;
        int count=0;
        // int ans;
        for(int i=0;i<nums.size();i++){
            
                cs+=nums[i];
                if(cs<0){
                    cs=0;
                }
                ms= max(ms,cs);
                count +=1;
                if(ms==k){
                    return count;
                }
             
        }
        return count;
       
    }
    
    int subarraySum2(vector<int>& nums, int k) {
        int cs=0;
        int ms=0;
        unordered_map<int,int> frequency;
        int count=0;
         frequency[0]=1;
        
        for(int i=0;i<nums.size();i++){
           
            
                cs+=nums[i];
                if(cs<0){
                    cs=0;
                }
                ms= max(ms,cs);
                // count +=1;
                // if(ms==k){
                //     return count;
                if(frequency.find(ms-k)!=frequency.end() && ms-k!=ms){
                    count+=frequency[ ms-k];
                   
                }
                 frequency[ms]++;

             
        }
        return count;
       
    }


    int subarraySum3(vector<int>& nums, int k) {
    unordered_map<int, int> mapp;
        int count = 0;
        int sum = 0;

        // Initialize the frequency of 0 to 1 (required for subarrays starting from index 0)
        mapp[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            // Check if sum - k exists in the hashmap
            if (mapp.find(sum - k) != mapp.end()) {
                count += mapp[sum - k];
            }

            // Increment the frequency of the current sum in the hashmap
            mapp[sum]++;
        }

        return count;
    }

};

int main()
{
vector<int> nums={1,2,1,2};
int k=3;
// chek for diff. arrays 
int ans1,ans2,ans3;
Solution x;
ans1=x.subarraySum1(nums,k);
cout<<"the 1st approach ans is "<<ans1<<endl;

ans2=x.subarraySum2(nums,k);
cout<<"the 1st approach ans is "<<ans2<<endl;

ans3=x.subarraySum3(nums,k);
cout<<"the 1st approach ans is "<<ans3<<endl;





    return 0;
}