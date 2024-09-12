#include<bits/stdc++.h>
using namespace std;
int factorial(int n){//building recursive function
// base case
    if(n==0){
        return 1;
    }
    // recursive function
    else{
    return n* factorial(n-1);
    }
}
int power(int x){
    // base case
    if(x==0)
    return 1;
  
        int small= power(x-1);
        int bigger= 2 * small;
        return bigger;
    
}
void counting(int n){
    // base case
    if(n==0)
    return ;
  
     counting(n-1);
      cout<<n<<endl;
}

bool is_sorted(int* arr,int n){
    // base case
    if(n==0|| n==1){
        return true;
    }
    //ek case solve kr rhe hai 
    if(arr[0]>arr[1]){
        return false;
    }
    // baki cases to recursion sambhal lega
    else{
        bool ans=is_sorted(arr+1,n-1);
        return ans;
    }
}
int sumofarray(int arr[], int n){
    if(n==0){
        
        return 0;
    }
    // ek case k liye solve karte hai 
    else{
        int sum= arr[0]+ sumofarray(arr+1,n-1);
        return sum;
    }
}
int main()
{
    
     int n;
     cout<<"the factorial of given no. : ";
     cin>>n;
     // function calling and storing its value
    int ans= factorial(n);
   cout<<"is : "<<ans<<endl;

    int x;
    cout<<"the power of the no. : ";
    cin>>x;
    
    int an= power(x);
    cout<<"with base 2 is : "<<an<<endl;
    
    int m;
    cout<<"tell me the no you want to count : ";
    cin>>m;

     counting(m);

     int arr[]={11,25,25,78,59};
     int n= sizeof(arr)/sizeof(arr[0]);
      cout<<"tell me the array is sorted or not "<<endl;
      int ans=is_sorted(arr,n);
      if(ans)
      cout<<"ans: the array is sorted"<<endl;
     else
      cout<<"ans: the array is not sorted"<<endl;
    cout<<sumofarray(arr,n);
  

    return 0;
}