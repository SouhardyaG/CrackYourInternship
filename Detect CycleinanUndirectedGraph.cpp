#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

    // Function to detect cycle in an undirected graph.
class Solution{
    private:
    int cycleDFS(int node, int par, vector<int> adj[], vector<int>& vis){
        vis[node]=1;
        for(int&i: adj[node]){
            if(!vis[i]){
                if(cycleDFS(i,node,adj,vis)){ 
                    return 1;
                }
            }
            else if(i!=par){ 
                return 1;
            }
        }
        return 0;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        for(int i =0;  i < V; i++ ){
            if(!vis[i]){
                if(cycleDFS(i,-1,adj,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends
