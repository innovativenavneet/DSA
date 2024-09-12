#include<iostream>
using namespace std;
void printsubarray(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           // cout<<"("<<arr[i]<<","<<arr[j]<<")";
           for(int k=i;k<=j;k++){
            cout<<arr[k];
            
           }
        cout<<endl;

        }
     
    }
}
int main(){
    int arr[]={15,65,96,36,14,78,95};
    //int n = sizeof(arr)/sizeof(int);
    int n=7;
    printsubarray(arr,n);
    return 0;
}