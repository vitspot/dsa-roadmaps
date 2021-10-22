#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

//Bipartite Graph Checker

class Graph
{
    map<int, list<int>> l;

    public:
    void addEdge(int x, int y)
    {
        l[x].pb(y);
        l[y].pb(x);
    }
   

  bool dfs_helper(int src, map<int,int> &visited, int parent, int col)
   {
       visited[src] = col;
      
       for(auto nbrs: l[src])
       {
           if(visited[nbrs]==0)
           {
            bool mila =  dfs_helper(nbrs, visited, src, 3-col);
            if(mila==true)
            {
                return true;
            }
           }
           else if(nbrs!=parent && visited[nbrs]!=col)
           { 
             return true;
           }
       }
       return false;
   }

    void dfs(int src)
    {
        //if value of visited[node]=0 means that the node is not visited yet
        //if value of visited[node]=1 means that the node is already visited and the node is colored as 1
        //if value of visited[node]=2 means that the node is already visited and the node is colored as 2
        map<int,int> visited;

        for(auto pair:l)
        {
            auto node = pair.first;
            visited[node]=0;
        }

        bool check = dfs_helper(src, visited, -1, 1);
        if(check)
        {
            cout<<"Bipartite";
        }
        else
        {
            cout<<"Not Bipartite";
        }
        

    }  

};

int32_t main()
{
  IOS;
  Graph g;
  //if graph have a odd cycle then the graph will not be a bipartite
  g.addEdge(1,2);
  g.addEdge(4,5);
  g.addEdge(5,1);
  g.addEdge(3,4);
  g.addEdge(3,2);
  g.dfs(1);

  return 0;
}

