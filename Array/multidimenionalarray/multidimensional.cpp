#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5]={   // 5,5 specifies the size of rows and columns , 
                      //it also determines the position of elements in rows and columns    
    {15,45,89,36,45},
    {47,12,36,49,57},
    {89,15,69,73,19},
    {83,64,17,93,28},
    {73,39,98,15,65}
    };
    
    for(int i=0;i<5;i++){
        cout<<endl;
        for(int j=0;j<5;j++){
               cout<<arr[i][j];
               

        }
        
    }
    
    

        cout<<"array after changing its element at the position (4,3)"<<endl;
        
        arr[4][3]={22222};
           for(int i=0;i<5;i++){
        cout<<endl;
        for(int j=0;j<5;j++){
               cout<<arr[i][j];
               

        }
    }
    
    return 0;
}