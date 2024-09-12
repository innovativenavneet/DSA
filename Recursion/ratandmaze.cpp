#include<bits/stdc++.h>
using namespace std;




class Solution{
    public:
    
    bool issafe(int x,int y, int n,vector<vector<int>> visited,vector<vector<int>> &m ){
        // matching the conditions
        
        if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
            return true ;
        }
        else{
            return false;
        }
        
    }
    void solve(vector<vector<int>> &m, int n,vector<string>& ans,int x,int y,
    vector<vector<int>> visited,string path){
        // base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return ;
        }
        
        //  marking visited 
        visited[x][y]=1;
        
        // we ahve 4 choiced D,L,R,U
        
        //for D
        
        int newx=x+1;
        int newy=y;
        
        if(issafe(newx,newy,n,visited,m)){
          path.push_back('D');
          solve(m,n,ans,newx,newy,visited,path);
          path.pop_back();   
        }
                //for Left
        
         newx=x;
         newy=y-1;
        
        if(issafe(newx,newy,n,visited,m)){
          path.push_back('L');
          solve(m,n,ans,newx,newy,visited,path);
          path.pop_back();   
        }
        
                        
        //for Right
        
         newx=x;
         newy=y+1;
        
        if(issafe(newx,newy,n,visited,m)){
          path.push_back('R');
          solve(m,n,ans,newx,newy,visited,path);
          path.pop_back();   
        }
                
        //for UP
        
        newx=x-1;
         newy=y;
        
        if(issafe(newx,newy,n,visited,m)){
          path.push_back('U');
          solve(m,n,ans,newx,newy,visited,path);
          path.pop_back();   
        }
                

        

        
        // after done finding path marking each and everything 0 again
        visited[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        
        if(m[0][0]==0){
            return ans;
        }
        
        int srcx=0;
        int srcy=0;
        
        vector<vector<int>> visited=m;
        for(int i=0;i<n;i++){
            for(int j=0; j<n;j++){
                visited[i][j]=0;
            }
        }
        string path="";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
int main()
{
        Solution sol;
    // Example matrix and size
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    int size = 4; // Size of the matrix (assuming it's a square matrix)
    
    vector<string> paths = sol.findPath(matrix, size);
    
    cout << "Possible Paths:" << endl;
    for (const string& path : paths) {
        cout << path << endl;
    }
    return 0;
}