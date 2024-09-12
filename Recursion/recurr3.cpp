#include<bits/stdc++.h>
using namespace std;

//Here we are finding power of any no. to its base

int power(int a,int b){
    // let's check the base cases 
    if(b==0)
    return 1;
    if(b==1)
    return a;
    
    // now we will recursively calling a function here 
    int ans = power(a, b/2);
    
    // now we will put the formula 
    if(b%2==0){
        //even case
        return ans*ans;
    }
    else{
        //odd cases
        return a*ans*ans;
    }
}


int main()
{
int a;
cout<<"tell me the base no. : "<<endl;
cin>>a;
int b;
cout<<"tell me the no. ^ to the base : "<<endl;
cin>>b;
cout<<"the power to the base you entered have value : "<<power(a,b);


    return 0;
}