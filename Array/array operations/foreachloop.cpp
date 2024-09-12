#include<iostream>
using namespace std;

int main(){
int array[]={45,89,56,14,24,36};
int n=sizeof(array)/sizeof(int);
cout<<"Traversing throgh for-each loop : "<<endl;
for (int i:array){

    cout<<i<<endl;
    
}
 cout<<"Traversing throgh ordinary loop : "<<endl;
for(int i=0;i<n;i++){
   
    cout<<array[i]<<endl;
}


    return 0;
}