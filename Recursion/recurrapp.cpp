#include<bits/stdc++.h>
using namespace std;


// we are implementing linear search through recursion 
bool linearsearch(int* arr,int n,int key){
    if(n==0){
        return false;
    }
    // ek case k liye hum relation bna lete hai 
    if(arr[0]==key){
        // cout<"the element is at : ";

        return true;
    }
    else{
         bool ans = linearsearch(arr +1 ,n,key);
         return ans;
    }

}
void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
bool binarysearch(int* arr, int s , int e , int key){
    cout<<endl;
    print(arr,s,e);
    if(s>e){
        return false;
    }
    
    int mid= s + (e-s)/2;

    ;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        // right part
        return binarysearch(arr, mid+1,e,key);
    }
    else{
        // left part
        return binarysearch(arr, s, mid-1, key);
    }
}


int main()
{   int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(int);
    /*
    cout<<"the element you want to search:"<<endl;
     int key;
     cin>>key;
    int ans=linearsearch(arr,n,key);
    if(ans)
    cout<<"the element is present "<<endl;
    else{
       cout<<"the element is not present "<<endl;  
    }
    */

   int key;
   cin>>key;
 int anss=binarysearch(arr,0,n-1,key);
 if(anss){
     cout<<"the element is found";
 }
 else{
     cout<<"the element is not found";
 }

    return 0;
}