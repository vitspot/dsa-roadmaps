#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> vec;
    
    void dfs(int v, bool visited[], vector<int> adj[])
    {
        visited[v] = true;
        vec.push_back(v);
        for(auto x: adj[v])
            if(!visited[x])
                dfs(x, visited, adj);
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        bool visited[V] = {false};
        dfs(0, visited, adj);
        return vec;
        
        // Code here
        
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends