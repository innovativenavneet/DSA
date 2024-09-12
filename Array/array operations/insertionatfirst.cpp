#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){

        cout<<arr[i]<<endl;

    }
}
void insert(int arr[],int &n, int e){
    if ( n+1<12){
        for(int i=n-1;i>=0;i--){

            arr[i+1]= arr[i];
            

        }
        arr[0]=e;
        n=n+1;

    }

}

int main(){
     int arr[12]={10,15,14,25,56,45,89,42,63,96};
     int n=10;
     //cout<<"enter the size u wanna print array: "<<" "<<endl;
     //cin>>n;
     
     display(arr,10);
     cout<<endl;
     insert(arr,n,78);
     display(arr,12);


    return 0;
}
