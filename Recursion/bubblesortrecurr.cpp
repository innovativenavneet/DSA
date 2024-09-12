#include<bits/stdc++.h>
using namespace std;


void bubble(int* arr, int n){
    // base case
    if(n==0)
    return;
     
     //ek value k liye bna lete hai 
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i+1],arr[i]);
        }
    }
    // baki to recursion sambhal lega!!
    bubble(arr, n-1);
}
int main()
{
    int arr[]={24,56,98,45,17,25,36,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<","<<endl;
    }

    return 0;
}