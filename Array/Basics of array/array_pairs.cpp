#include<iostream>
using namespace std;
//we use two nested loop here one for the iterating over all the elements and second for making loops

void Printallpairs(int arr[],int n){
    for(int i=0;i<n;i++){
        int x=arr[i];
        
        for(int j=i+1; j<n; j++){
            int y= arr[j];

            cout<< x <<" , "<<y<<endl;
        }
        cout<<endl;
    }

}
int main(){
    int arr[] = {10,20,30,40,50,60};

int n = sizeof(arr)/sizeof(int);
  
    
Printallpairs(arr,n);






    return 0;
}