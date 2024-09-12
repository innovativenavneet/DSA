#include<iostream>

using namespace std;

void Display(int arr[], int n){
    if (n<20){
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       }
    }
    else{
        cout<<"your size is less ";
    }
    cout<<endl;
}
void Delete(int arr[],int n,int pos){
    for(int i=pos; i< n;i++){
        arr[i-1]=arr[i];
    }
    n=n-1;
}
int main(){
    int arr[15]={20,56,89,45,15,24,63};
    int n = sizeof(arr)/sizeof(arr[0]);
    Display(arr,n);
    int pos;
    cout<<endl;
    cout<<"tell me which position you want to delete an element"<<" "<<endl;
    cin>>pos;
    Delete(arr,n,pos);
      Display(arr,n);
    return 0;
}