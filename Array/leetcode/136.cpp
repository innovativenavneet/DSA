#include<bits/stdc++.h>
using namespace std;
vector<int> element(vector<int>nums,int n){
vector<int> repetative;
unordered_map<int,int>frequency;
int nonrepeat;
for(auto x:nums){
    frequency[x]++;
}
for(auto x : frequency){
    if(x.second>1){
        repetative.push_back(x.first);
    }
   
}
cout<<"the non-repeative element "<<nonrepeat<<endl;
return repetative;

}


int main()
{
    vector<int> nums={4,1,2,1,2};
    int n = nums.size();


    for(int x: nums){
    
    cout<<x<<endl; 
    // for repetative element identification
    /*declare a function of vector type then declare an array to store 
    repetative element and an unordered map to store the frequency of repetad element then 
    step1.> to loop into base array and store the frequency in map
    step2.> to loop into map and store the element in retative element array
    step3.> return repetative element from function
    step4,> inside main call function while equating it to an array and pass base array 
    step5.> loop  into last declared array and printout the value  */
    }
    cout<<"the repetative element are"<<endl;
    vector<int> base=element(nums,n);
    for(auto x: base){
        cout<<x<<endl;
    }

    return 0;
}