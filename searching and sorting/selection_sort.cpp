#include<iostream>
using namespace std;
void selection(int *arr,int n){
    for (int pos=0;pos<n-2;pos++){
        // a variable to store the curr element
        int curr=arr[pos];
        int min_pos=pos;
        for(int j=pos;j<n;j++){
            if(arr[j]<arr[min_pos]){
                min_pos=j;

            }


        }
        swap(arr[min_pos],arr[pos]);
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    cout<<"array before sorted : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection(arr,n);
        cout<<"array after sorted : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;






    }
