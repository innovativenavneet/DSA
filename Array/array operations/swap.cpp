#include<iostream>

using namespace std;

void Display(int arr[], int n){
        for(int i=0;i<n;i++){

            cout<<arr[i]<<endl;

        }
        cout<<endl;

        }




 int main(){

    int arr[10]={32,45,46,78,64,34,65,47,36};

    int n= sizeof(arr)/sizeof(arr[0]); //this will store  no. of elements in an array 
    Display(arr,n);
    swap(arr[4],arr[5]);
    Display(arr,n);



    return 0;

 }
