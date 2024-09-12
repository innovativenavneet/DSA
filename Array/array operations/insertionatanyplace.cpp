#include<iostream>

using namespace std;

void Display(int arr[], int n){
        for(int i=0;i<n;i++){

            cout<<arr[i]<<endl;

        }
        cout<<endl;

        }

void Insert(int arr[],int n, int pos, int e){
      

      for(int i=n-1; i>=pos;i--){
       arr[i+1]=arr[i];
        
      }

      arr[pos]=e;

      n=n+1;

      }



 int main(){

    int arr[10]={32,45,46,78,64,34,65,47,36};

    int n= sizeof(arr)/sizeof(arr[0]); //this will no. of elements in an array 
    Display(arr,n);
    Insert(arr,n,6,87);
    Display(arr,n);



    return 0;

 }
