class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size();
        int n = image[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> vis(m,vector<int>(n,0));
        int oldColor = image[sr][sc];
        
        q.push({sr,sc});
        vis[sr][sc] = 1;
        image[sr][sc] = newColor;
        
        
        while(!q.empty()){
            pair<int,int> x = q.front();
            q.pop();
            int a = x.first;
            int b= x.second;
            
            vis[a][b] = 1;
            image[a][b] = newColor;
            
            // Checking Left element:
            if(0 <= a && a <m && b-1<n && b-1>=0  && image[a][b-1] == oldColor && vis[a][b-1]!=1)
            {
                q.push({a,b-1});
                
            }
            // Checking Right element:
            if(0 <= a && a <m && b+1<n && b+1>=0  && image[a][b+1] == oldColor && vis[a][b+1]!=1)
            {
                q.push({a,b+1});
                
            }
            // Checking Down element:
            if(0 <= a+1 && a+1 <m && b<n && b>=0  && image[a+1][b] == oldColor && vis[a+1][b]!=1)
            {
                q.push({a+1,b});
                
            }
            // Checking Top element:
            if(0 <= a-1 && a-1 <m && b<n && b>=0  && image[a-1][b] == oldColor && vis[a-1][b]!=1)
            {
                q.push({a-1,b});
                
            }
            
        }
        return image;
    }
};