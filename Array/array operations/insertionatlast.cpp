#include<iostream>
using namespace std;

void Display(int arr[], int n){
    for(int i=0;i<n;i++){

    cout<<arr[i]<<endl;
         
    }
cout<<endl;


}
void Insert(int arr[], int n, int e){
     if(n<50){
        arr[5]= e;
     }  
     else{
        cout<<"exit the array"<<endl;
     }  
}
int main(){
    int arr[50];
    
    cout<<"enter the elements of an array:"<<" "<<endl;
    for (int i=0;i<=4;i++){
        cin>>arr[i];

    }cout<<endl;

     cout<<"before insertion : "<<endl;

    Display(arr,5);

     cout<<"after  insertion : "<<endl;
    
    Insert(arr,5,48);

     Display(arr,6);




    return 0;
}
