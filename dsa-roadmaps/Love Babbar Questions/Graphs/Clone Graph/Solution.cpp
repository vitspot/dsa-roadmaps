
class Solution {
    void dfs(Node* curr,Node* node,vector<Node *>& visited)
    {
        //Node* copy = new Node(node->val);
        visited[node->val] = node;
        for(auto ele: curr->neighbors)
        {
            if(visited[ele->val] == NULL)
            {
                Node *newnode = new Node(ele->val);
                (node->neighbors).push_back(newnode);
                dfs(ele,newnode,visited);
            }
            else
                (node->neighbors).push_back(visited[ele->val]);
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        
        vector<Node *> visited(1000,NULL);
        Node* copy = new Node(node->val);
        visited[node->val] = copy;
        //Iterate for all neighbors
        for(auto curr: node->neighbors)
        {
            if(visited[curr->val] == NULL)
            {
                Node *newnode = new Node(curr->val);
                (copy->neighbors).push_back(newnode);
                dfs(curr,newnode,visited);
            }
            else
                (copy->neighbors).push_back(visited[curr->val]);
        }
        return copy;
    }
};


static int fastio = []() {
    //#define endl '\n'
    std::ios::sync_with_stdio(false);
    //std::cin.tie(NULL);
    //std::cout.tie(0);
    return 0;
}();