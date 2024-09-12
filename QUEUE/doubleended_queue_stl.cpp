#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;

d.push_front(12);
d.push_back(14);

 cout<<"the front element is "<<d.front() <<endl;
 cout<<"the element form back is "<<d.back() <<endl;
d.pop_back();
cout<<"the front element is "<<d.front() <<endl;
 cout<<"the element form back is "<<d.back() <<endl;
// d.pop_back();
if(d.empty()){
    cout<<"the queue is empty "<<endl;

}
else{
    cout<<"the queue is not empty"<<endl;
}
    return 0;
}