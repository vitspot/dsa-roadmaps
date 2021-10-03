class Solution
{
    //Function to return Breadth First Traversal of given graph.
    public ArrayList<Integer> bfsOfGraph(int V,ArrayList<ArrayList<Integer>> adj)
    {
        ArrayList<Integer> bfs= new ArrayList<>();
        Queue<Integer> queue= new LinkedList<>();
        ArrayList<Integer> visited= new ArrayList<>();
        
        queue.add(0);
        
        while(!(queue.isEmpty())) {
            int p= queue.poll();
            if(!(visited.contains(p))) {
                bfs.add(p);
                for(int i=0; i<adj.get(p).size(); i++) {
                    queue.add(adj.get(p).get(i));
                }
                visited.add(p);
            }
        }
        
        return bfs;
    }
}