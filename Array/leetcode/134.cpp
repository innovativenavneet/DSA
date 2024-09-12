#include<bits/stdc++.h>
using namespace std;

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n= gas.size();
        // int k=cost.size();
        int currfuel=0;
        int ans=-1;
        for(int i=0;i<n;i++){
           currfuel=(gas[i]-cost[i])+gas[i+1];
           cout<<currfuel;
            if(currfuel==0){
                ans==gas[i];
            }
            else{
                ans==0;
            }
            currfuel=0;
        }
        return ans;
    }


int main()
{
vector<int> gas={1,2,3,4,5};
vector<int> cost={3,4,5,1,2};
cout<<canCompleteCircuit(gas,cost);

    return 0;
}