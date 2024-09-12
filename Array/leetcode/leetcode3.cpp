#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nav={1,7,8,9,5};
   // int minimum= min_element(nav.begin(),nav.end());

   
        auto it=min_element(nav.begin(),nav.end());
        

   // cout<<"the min element is : "<<*it;

    auto jt=max_element(nav.begin(),nav.end());
    for( int i=0;i<sizeof(nav);i++){
   if (it<jt){
    return (*it-*jt);
   }
   else{
    return 0;
   }
    }
   

    

    return 0;
}


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpro= prices[0];
        int maxpro = 0;
           
    for( int i=1;i<prices.size();i++){
      maxpro= max(maxpro,prices[i]-minpro);
        minpro= min(prices[i],minpro);  
   }
   
    return maxpro;
    }
};

        