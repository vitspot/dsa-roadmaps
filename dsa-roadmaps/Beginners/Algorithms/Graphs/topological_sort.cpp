#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back
#define pf push_front

//Sorting the graph in topological order

class Graph
{
    map<int, list<int>> l;
    
    public:
    void addEdge(int x, int y)
    {
        l[x].pb(y);
    }

    void dfs_helper(int node, map<int, bool> &visited, list<int> &ordering)
    {
      visited[node] = true;

      for(auto nbrs: l[node])
      {
          if(!visited[nbrs])
          {
              visited[nbrs] = true;
              dfs_helper(nbrs, visited, ordering);
          }
      }

      ordering.pf(node);
    }

    void dfs(int src)
    {
        map<int, bool> visited;
        list<int> ordering;
        for(auto pair: l)
        {
            auto node = pair.first;
            visited[node] = false;
        }

        for(auto pair: l)
        {
            auto node = pair.first;
            if(!visited[node])
            {
                dfs_helper(node, visited, ordering);
            }
        }

        for(auto items: ordering)
        {
            cout<<items<<" ";
        }
    }
};

int32_t main()
{
  IOS;
  Graph g;
  g.addEdge(1,2);
  g.addEdge(1,3);
  g.addEdge(1,4);
  g.addEdge(3,5);
  g.addEdge(4,5);
  g.addEdge(5,7);
  g.addEdge(6,7);
  g.dfs(1);

  
  return 0;
}

