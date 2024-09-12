#include<iostream>
using namespace std;

//intializing a function to store an array 
void printarray(int * arr){

cout<<"in function"<<sizeof(arr)<<endl;

}
int main(){
    int arr[9]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);//for calculating 
                                    //no of elements in an array

cout<<"in int main "<<sizeof(arr)<<endl;
printarray(arr);
return 0;
}