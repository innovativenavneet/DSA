#include<bits/stdc++.h>
using namespace std; 
void merge(vector<int>nums1,vector<int>nums2,int m, int n){

    for(int j=0, i=m;j<n;j++){ // j will iterate over all the elements of nums2
                               // i will point to curr element andof nums1 into nums2
      nums1[i]=nums2[j]; 
      i++;
      
    }
     sort(nums1.begin(), nums1.end());
}
void print(vector<int>nums1){
for(auto na:nums1){
cout<<na;
}
}
int main(){

  std::vector<int>nums1={1,2,3};
    std::vector<int>nums2={2,4,5};
    int m= nums1.size();// m will store the size of nums1
    int n= nums2.size();// n will store the size of nums2

    merge(nums1,nums2,m,n);
    print(nums1);

    
      
   




    return 0;
}