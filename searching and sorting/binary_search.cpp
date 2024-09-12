#include<iostream>
/*time complexity:
the binary search have time complexity for k no of steps N/2^k=1(array is of 1 size last step)
=> N=2^k
=> k=log2 N
=> time complexity of binary search is O(log N) */
using namespace std;
// Binary search operation
int binary_search(int arr[],int n,int key){//initialization of binary search function 
int s=0;   //start symbol
int e=n-1; //end symbol
while(s<=e){
    int mid= (s+e)/2;//middle key

    if(arr[mid]==key){
        return mid;//we found the element we were searching for
             
    }
    else if(arr[mid]>key){
        e=mid-1; //the element is lesser than
    //the middle element then it will discard the right side array
    }
    else {
        s=mid+1;//the element is greater than the middle elemnt then it will
        //discard the left array
        //s=mid+1;
    }
}
    return -1;//if key is not found it will return this value

    }


    int main(){
        int arr[] = {10,20,30,45,50,65,79};
        int n = sizeof(arr)/sizeof(int);

        int key;
        cin>>key;//taking input from user to search for an element 

        int index = binary_search(arr,n,key);
        if(index!= -1){
            cout<<key<<" is present at index"<< index <<endl;

        }
        else {

            cout<<key<<" is not Here! "<<endl;
        }

        return 0;
    
    }


