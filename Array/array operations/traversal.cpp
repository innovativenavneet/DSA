#include<iostream>
using namespace std;

void display(int arr[], int n){ //function to display array elements
for (int i=0;i<n;i++){
    cout<<"index:  "<<i<<" elements are stored :  "<<arr[i]<<endl;
}

}
int main(){
    int arr[9]={13,56,43,55,89,45,78};//array declaration

    int n=9;//this thing declare how many elements i have to iterate

    cout<<"array elements :"<<" "<<endl;//this will print array by storing function into it 

    display(arr,n);//calling function

    return 0;
}