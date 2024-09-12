#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a =4;
    int b =6;

    cout<<"And operator : "<<(a&b)<<endl;
    cout<<"Or  operator : "<<(a|b)<<endl;
    cout<<"Not operator : "<<(~a)<<endl;
    cout<<"XOR operator : "<<(a^b)<<endl;
    cout<<endl;
    cout<<"the left shift of 5, 1 times is : " <<(5<<1)<<endl;
    cout<<"the left shift of 2, 2 times is : " <<(2<<2)<<endl;
    cout<<"the Right shift of 5, 1 times is : "<<(5>>1)<<endl;
    cout<<"the Right shift of 5, 2 times is : "<<(5>>2)<<endl;

    int n;
    cout<<"the no. you want to convert in binary form : ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit= n&1;
        ans= (bit*pow(10,i)) + ans;
        n=n>>1;
        i++;

    }

    cout<<"the output is : "<<ans;



    return 0;
}