// the idea is we will count frequecy of an alphabet in a string by using ACII value
// we will use Hashmap 
// we will use a formula 'ch' - 'a' = index we will hash it 
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cout<<"enter the string you want to search : ";
   cin>>s;
   cout<<endl;

// pre - compute 
int hash[26]={0};//here we are taking max possible size
for(int i=0;i<s.size();i++){
   hash[s[i]-'a']++;
}


   int q;
   cout<<"enter the no. of query you want to search : ";
   cin>>q;
   cout<<endl; 
   cout<<"enter the character you want to search :";
   while(q--){
    char c;
    cin>>c;
    // fetch

    cout<<"the frequency of the char is: "<<hash[c-'a']<<endl;
   }
    return 0;
}