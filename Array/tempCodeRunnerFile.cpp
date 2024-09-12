#include<iostream>
using namespace std;
void bubblesort(int *arr, int n){
    for(int times=1;times<n-1;times++){
        for(int j=0;j<=n-1-times;j++){
            cout<<arr[j]<<endl;
        }
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    int n= sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    return 0;
}