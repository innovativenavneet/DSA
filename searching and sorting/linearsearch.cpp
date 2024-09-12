/* the basic idea is 
1. initialize key element and match the array with that element 
and take input for that input from the user
2. a for loop to iterate over array and is key matches with that element 
than return a value which is i
3. inside the main function return a statement and a value for every element
  */
#include<iostream>
using namespace std;
//function for linear search
int linearsearch(int arr[], int n, int key){
    //check if current element with the key
    for(int i=0;i<n;i++){
        if(arr[i]==key){
    return i;
    
}
    }
    return -1;
}
int main(){
    int arr[]={10,15,28,2,9,56};
    int n = sizeof(arr)/sizeof(int);
    int key;//no. to be searched
    cin>>key;
//in wich index key is present 
    int index = linearsearch(arr,n,key);
    if(index!=-1){
        cout<<key<<"is present at index: "<<index<<endl;

    }
    else{
        cout<<key<<"is not found"<<endl;
    }
return 0;
}