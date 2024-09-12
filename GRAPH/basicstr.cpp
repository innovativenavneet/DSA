// We are implementing Graph here
#include<bits/stdc++.h>
using namespace std;
// there are two ways to implement graph:
// 1. Adjacencey matrix
// 2. Adjacency list

// we are implememnting adj list here
vector<vector<int>> printadjancency (int n, int m, vector<vector<int>>& edges){
    vector<vector<int>> ans(n);

    for(int i=0;i<m;i++){
        int u= edges[i][0];
        int v= edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    // now we want to print the nodes and its connectivity
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++){
        adj[i].push_back(i);//saare nodes ko daal diya adj mein

        for(int j=0;j<ans[i].size();j++){//ans[i] will denote all the indices of ans
          adj[i].push_back(ans[i][j]);
          
        }
        }
        return adj;
}


// BFS Traversal in Graph

void Bfs(int source,const vector<vector<int>>& adj){
    queue<int>  q;
    vector<bool> visited(adj.size(), false); // Initialize visited array
    q.push(source);
    visited[source]=true;
    while(!q.empty()){
    int f= q.front();
    cout<<f<<endl;
    q.pop();

    for(auto neigh:adj[f]){
        if(!visited[neigh]){
            q.push(neigh);
            visited[neigh]=true;
        }
    }
   
}
}
	void dfsHelper(int node, vector<bool>& visited, const vector<vector<int>>& l) {
    visited[node] = true;
    cout << node << ",";

    // Make a DFS call on all its unvisited neighbors
    for (int nbr : l[node]) {
        if (!visited[nbr]) {
            dfsHelper(nbr, visited, l);
        }
    }
}

void dfs(int source, const vector<vector<int>>& l) {
    int V = l.size(); // Assuming l is your adjacency list and V is the number of nodes
    vector<bool> visited(V, false);
    dfsHelper(source, visited, l);
}


int main()
{

int n = 3; // Number of nodes, change this as needed
int m  =3;
 vector<vector<int>> edges = {{1, 2}, {0, 2}, {0, 1}};

    vector<vector<int>> adjacency = printadjancency(n, m, edges);

    // Printing the adjacency list
    for (int i = 0; i < adjacency.size(); ++i) {
        cout << "Node " << i << " is connected to: ";
        for (int j = 0; j < adjacency[i].size(); ++j) {
            cout << adjacency[i][j] << " ";
        }
        cout << endl;
    }

int sourceNode = 0; // Change this as needed
    cout << "BFS Traversal from Node " << sourceNode << ": ";
    Bfs(sourceNode, adjacency);


    cout << "DFS Traversal from Node " << sourceNode << ": ";
    dfs(sourceNode, adjacency);


    return 0;
}