#include<bits/stdc++.h>
using namespace std;

int main(){
        // declaring the size of array
    int n;
    cout<<"the size of the array:: ";
    cin>>n;
    cout<<endl;
int arr[n];
cout<<" give inputs in array:: ";

for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<endl;


// precompute 



map<int,int>mpp;//declaration of map 

cout<<"the no stored in map in the form::  ";
for(int i=0;i<n;i++){
    mpp[arr[i]]++; //this will store value and frequency of array at mapp
}

// iterating over the map
 for(auto it:mpp){
     cout<<it.first<<"->"<<it.second<<endl;

 }

int size;
cout<<"how many no. you want to search   :: "<<endl;
cin>>size;
cout<<endl;
cout<<"enter the no. you want to search :: "<<endl;
while(size--){
    // the number that user will input so that the frequency of that no. can be searched 
    int number;
    cin>>number;
    // fetch

   cout<<"the frequecy of no. is : "<<mpp[number]<<endl;
}
    return 0;
}