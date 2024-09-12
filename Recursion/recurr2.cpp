#include<bits/stdc++.h>
using namespace std;

void reverse( string&str,int i, int j){
if (i>j)
return ;
swap(str[i],str[j]);
i++;
j--;
 reverse(str,i,j);
}

bool panlindrome(string str2,int i,int j)
{
    if(i>j)
    return true;
    if(str2[i] != str2[j])
        return false;
    
    else{
      
        return panlindrome(str2,i+1,j-1);

    }
}
int main()
{
    string str="navneet";
    
    
    reverse(str,0,str.length()-1);
   // cout<<str;
    
    string str2="naan";
    bool ans = panlindrome(str2,0,str2.length()-1);
    if(ans){
        cout<<"palindrome exits";
    }
   
    else{
        cout<<"palindrome does'nt exits ";
    }
    return 0;
}