/*the idea is we use two nested loop as we done before where we were finding pairs of an array
now by using those two loops we are finding indexes of pairs of arrays
and by introducing a this loop we are storing value at those indexes of array*/

#include<iostream>
using namespace std;

void subarray(int arr[],int n){
for(int i=0;i<n;i++){

    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
          cout<<arr[k]<<",";
          cout<<arr[k]+ arr[k+1]<<",";
        }
        cout<<endl;
    }
 
}
}
int main(){
    int arr[]={12,15,24,17,18,179,78,45,45};
    int n= sizeof(arr)/sizeof(int);
    subarray(arr,n);
    
    return 0;
}