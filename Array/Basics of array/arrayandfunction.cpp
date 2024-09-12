#include<iostream>
using namespace std;
void functn(int *arr,int n){
    cout<<"in function the size of array : "<<sizeof(arr)<<endl;
    cout<<"in function the array will be : "<<endl;
    //int n= sizeof(arr)/sizeof(int);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={24,89,61,73,28,59,68};
    int n= sizeof(arr)/sizeof(int);
    functn(arr,n);
    cout<<"in main the size of array : "<<sizeof(arr)<<endl;
    cout<<"in main the array will be : "<<' '<<endl;
     for (int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    
    
    return 0;
}