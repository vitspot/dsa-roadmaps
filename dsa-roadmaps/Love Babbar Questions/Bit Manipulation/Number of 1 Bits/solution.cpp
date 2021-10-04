#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int n) {
        int c=0;
        while(n)
        {
            if(n%2!=0)
                c++;
            n = n/2;
            
        }
        return c;
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends