#include<iostream>
using namespace std;
void insertion(int *arr, int n){
    int i;
   
    for ( i = 1; i <=n-1; i++)
    {
         int curr=arr[i];
         int prev=i-1;
        while (prev>=0 and arr[prev] > curr)
        {
            arr[prev+1]=arr[prev];
            prev=prev-1;
           
        }
        arr[prev +1]=curr;
    }
    
}
int main(){
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
