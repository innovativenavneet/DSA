/*Program for pairs in STL*/

#include<bits/stdc++.h>// this will include all library in our code
using namespace std;

int main(){

    cout<<"Implementation of single pair: "<<endl;
    pair<int,int>p={1,4};
    cout<<p.first<<" "<<p.second<<" "<<endl;


     cout<<"Implementation of pair containing three elements : "<<endl;
    pair<int ,pair<int,int >>m={5,{9,6}};
    cout<<m.first<<" "<<m.second.first<<" "<<m.second.second<<" "<<endl;
     pair< pair<int,int>,pair<int,int>>n={{1,4},{4,7}};
    cout<<n.first.first<<" "<<n.second.second<<" "<<endl;


    cout<<"implementation of pairs as array in it : "<<endl;
    pair<int,int> a[]={{4,5},{5,9},{3,4},{4,7}};
    cout<<a[3].second<<endl;
   


    return 0;
}