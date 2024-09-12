#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=7;
    int b= 19;
     cout<<endl;
    cout<<"AND OPERATION ::"<<endl;

// using and operation false,false
    cout<<((a==b)&&(a>b));
    cout<<endl;
    // using and operation false,true
    cout<<((a==b)&&(a<b));
    cout<<endl;
    // using and operation true,false
    cout<<((a<b)&&(a==b));
    cout<<endl;
    // using and operation true,true
    cout<<((a<b)&&(b>a));
    cout<<endl;

    cout<<"OR OPERATION :: "<<endl;
    // using and operation false,false
    cout<<((a>b)||(a==b))<<endl;
    // using and operation false,true
    cout<<((a>b)||(a<b))<<endl;
    // using and operation true,false
    cout<<((a<b)||(a>b))<<endl;
    // using and operation true,true
    cout<<((a<b)||(b>a))<<endl;

    cout<<"NOT OPERATION :: "<<endl;
    cout<<~((a>b))<<endl;
    cout<<~((a<b))<<endl;
    cout<<(~(0))<<endl;//this will result into -1 because 
    // not operation is 1's compliment of a no. so 0 is stored
    // in the form of 00000 and 1's compliment of this is 
    // -1 because 1's compliment of that is 11111 where left-most
    // 1 represent MSB ::: if (1) then no. is negative 
                        // if (0) then no. is positive 

    cout<<"XOR OPERATION :: "<<endl;
     // using and operation false,false
    cout<<((a>b)^(a==b))<<endl;
      // using and operation false,true
    cout<<((a>b)^(a<b))<<endl;
    // using and operation true,false
    cout<<((a<b)^(a>b))<<endl;
    // using and operation true,true
    cout<<((a<b)^(b>a))<<endl;

    return 0;
}