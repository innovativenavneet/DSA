#include<iostream>
using namespace std;
void bubblesort(int *arr, int n){
    for(int times=1;times<=n-1;times++){
        for(int j=0;j<=n-times-1;j++){
          if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
           
          }
           cout<<arr[j];
        }
        cout<<endl;
    }
    
}
int main(){
    int arr[]={5,4,3,2,1};
    int n= sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}