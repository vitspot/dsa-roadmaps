// https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1#
// Only function available 

#define pii pair<int,pair<int,int>>
#define ff first
#define ss second

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  for(int i=0; i<n; i++){
    pq.push({mat[0][i], {0,i}});
  }
  pii topp;
  for(int i=0; i<k; i++){
      topp=pq.top();
      pq.pop();
      int roww = topp.ss.ff;
      int coll = topp.ss.ss;
      
      if(roww+1<n){
          pq.push({mat[roww+1][coll], {roww+1, coll}});
      }
  }
  return topp.ff;
}
