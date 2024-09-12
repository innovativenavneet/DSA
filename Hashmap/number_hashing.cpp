// the example of number hashing 
#include<bits/stdc++.h>
using namespace std;
// preprocessing 
int main()
{
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
// declaration of an array for hashtable
int hash[13]={0};  //the maximum sixe is 13


// for every no entered in arr the index = number , the value at that index becomes 1
for(int i=0;i<n;i++){
    hash[arr[i]] +=1;

}
// how many no. you want to search == size
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
    cout<<"the frequecny of the no. is " <<hash[number]<<endl;
}

    return 0;
}

