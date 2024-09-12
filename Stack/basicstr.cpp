#include<bits/stdc++.h>
#include<stack>
using namespace std;

// Implementation of stck using class 
// there are two ways to implement stack: array and LinkedList
class Stack{
   //Properties
   public:
   int* arr;
   int top;
   int size;

//    behaviour
 Stack(int siz){  //constructor
    this->size=siz; //this will initialize size
    arr= new int[size];//this will provide memory to stack
    top=-1;// this will initialize top

 }
 void push(int ele){

 if(size-top >1){// first check the space is available or not
    top++;//top first element pr aa gya
    arr[top]=ele;//element ko insert kr diye
 }
    else{
        cout<<"Stck Overflow"<<endl;
    }
 }
 
 void pop(){
    // first element is present or not 
      if(top>=0){
        top--;//top ko gatha dene se element print hi nhi hoga
      }
      else{
        cout<<"Stack Underflow"<<endl;
      }

 }
 int peek(){
     if(top>=0){
    return arr[top];//top waise v last element ko dikha rha hai
     }
     else{
        cout<<"stack is empty"<<endl;
        
        return -1; 
     }
 }
 bool isempty(){
if (top==-1){
    cout<<"Stack is empty"<<endl;
    return true;
}
else{
    cout<<"stack is not empty ";
    return false;
}
 }
};

int main()
{    /*
    // Implementation of stack using STL
 stack<int> s;
 s.push(2);
 s.push(4);
 s.pop();
 cout<<"the top element is : "<<s.top()<<endl;;
//   cout<<s.peek();
 if(s.empty()){
    cout<<"stack is empty";
 }
 else{
    cout<<"stack is not empty"<<endl;
 }

 cout<<"size of stack is : "<<s.size()<<endl;
    */
   //stack creation
   Stack st(5);
   st.push(43);
   st.push(77);
   st.push(11);
   cout<<"the element at top is: "<<st.peek()<<endl;
    st.pop();
       cout<<"the element at top is: "<<st.peek()<<endl;
cout<<st.isempty();

    return 0;
    
}