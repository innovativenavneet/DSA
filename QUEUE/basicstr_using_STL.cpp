#include<bits/stdc++.h>
using namespace std;
//as stack queue can also be implementes using
// array and LinedList

// now we will implement using array::

int main()
{
    queue<int> q;
    q.push(15);
    q.push(8898);
    q.push(89);
    q.push(48);
    q.push(947);
    
    cout<<"the size of queue is: "<<q.size()<<endl;
    q.pop();
    cout<<"the size of queue is: "<<q.size()<<endl;
    cout<<"the queue is empty or not: "<<q.empty()<<endl;
    cout<<"the queue from front: "<<q.front()<<endl;
    
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<"the queue is empty or not: "<<q.empty()<<endl;

    return 0;
}