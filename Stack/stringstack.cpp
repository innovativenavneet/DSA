// Implementation of string using stack
#include<bits/stdc++.h>
using namespace std;
// stack is used to get reverse of anything
int main()
{
string str= "navneet";
stack<int> n;

for(int i=0;i<str.length();i++){//traversing the string
    char ch= str[i];
    n.push(ch);//string k value ko stack m daal diya hai 
}

string ans= " ";
 while(!n.empty()){//jb tk stack empty nhi ho jata hai 
          char ch = n.top();//ch will store the characters retrive from the stack
          ans.push_back(ch);//"ans" string k andar stack k values " ch" chala jayega
          n.pop();//saare ch ko stack se delete kr rhe hai
 }
 cout <<"answer is : "<<ans<<endl;
    return 0;
}