#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v ={1,2,3,4,5};
cout<<"the size is "<<v.size()<<endl;
//v.push_back({45,45});//this is wrong because pushback function only store singular value 
v.push_back(46);
v.emplace_back(90);
vector<int>m(19,7);
vector<int>n(m);
//accessing through vector elements 
cout<<"the element through normal access method is "<<v[3]<<" "<<endl;
//acessing through iterators .
vector<int>::iterator nav = v.begin();//this begin is pointing at the first index


nav++;//we are incrementing so that it will iterate over all elements


cout<<*nav<<" ";//the pointer helps to print the value at index without pointer the add is denoted

cout<<*(v.begin())<<" ";//we can always  print in value at first index in this way


nav=nav+2;
cout<<*nav<<" ";

vector<int>:: iterator na = v.end();// v.end will assign value at next to last index in an vector
na = na-1;
cout<<*na<<" "<<endl;

//traversing to all elements and accessing each elements in vector
 cout<<"the all vector elements using ordinary for loop is "<<endl;
for(vector<int>::iterator ss= v.begin(); ss!=v.end(); ss++){
   cout<<*ss<<endl;
}
//traversing using auto keyword
cout<<"the all vector elements using auto keyword in  for loop is "<<endl;
for(auto ss= v.begin(); ss!=v.end(); ss++){
   cout<<*ss<<endl;
}
//traversing through for each loop
cout<<"traversing through for each loop: ";
for(auto ss: v){
    cout<<ss<<endl;

}


return 0;
}