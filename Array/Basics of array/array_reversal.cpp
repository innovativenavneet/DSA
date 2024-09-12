#include<iostream>
using namespace std;
//Array reversal
/* we will do reversal of array by swapping its elements 
first we will initialize the start 's' and end 'e' and then we will
swap s <-> e with each other 
then we will increment the start and decrement the end and then agian swap it*/

void reverseArray(int arr[],int n){//function declarition and defiinition 
int s =0;//start symbol
int e = n-1;//end symbol

while (s<e)
{
    swap(arr[s],arr[e]); 
    s +=1;
    e -=1;
    /* code */
}
}
int main(){
    int arr[]={10,14,17,18,19,32,46,58,97,43};
    int n = sizeof(arr)/sizeof(int);

     cout<<"array before reversal ";
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
        
    }
    
    cout<<endl;

    reverseArray(arr,n);//call by refernce
     cout<<"array after  reversal ";
    
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
        
    }

   
    return 0;
}