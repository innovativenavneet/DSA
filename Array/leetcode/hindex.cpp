#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.end(),citations.begin());
    int n = citations.size(),index;
    for(int i=0;i<n;i++){
      int k=n-i;
      if(k>=citations[i]){
        index= max(index,citations[i]);
      }
    }
    return index;
}

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};
    cout << hIndex(citations) << endl; // Output: 3
      
    return 0;
}
