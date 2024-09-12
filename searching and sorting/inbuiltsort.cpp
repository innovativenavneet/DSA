#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a ,int b){
    return a<b;
}
int main(){
    int arr[]={15,46,89,17,39,79};
    int n= sizeof(arr)/sizeof(int);
    cout<<"array before sorting "<<" "<<endl;
    for(int i : arr){
        cout<<i<<' ';
    }
    cout<<endl;
    cout<<"array after sorting "<<" "<<endl;
    sort(arr,arr+n,compare);
     for(int i : arr){
        cout<<i<<' ';
    }
    return 0;
}
