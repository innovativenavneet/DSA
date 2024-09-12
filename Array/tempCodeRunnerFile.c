// BRUTE FORCE APPROACH 

#include<iostream>
using namespace std;
int largestsum(int *arr,int n){
    int prefixsum= 0;// for storing the value of the largest sum
       for(int i=0;i<n;i++){
        prefixsum += arr[i-1] + arr[i];
       }
       return prefixsum;
}
int main(){ 
    int arr[]={45,96,66,48,12,37,91,49};
    int n= sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
}
cout<<largestsum(arr,n);

    return 0;
}