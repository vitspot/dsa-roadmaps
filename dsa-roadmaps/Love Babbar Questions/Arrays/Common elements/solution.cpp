// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            unordered_set <int> uset,uset2,uset3;
            vector<int> res;
        	for(int i=0;i<n1;i++){
        		uset.insert(a[i]);
        	}
        	for(int i=0;i<n2;i++){
        		uset2.insert(b[i]);
        	}
        	
        	for(int i=0;i<n3;i++){
        		if(uset.find(c[i])!=uset.end() && uset2.find(c[i])!=uset.end()){
        			if(uset3.find(c[i])==uset3.end())
        				res.push_back(c[i]);
        			uset3.insert(c[i]);
        		}
        	}	
        	return res;
                    
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends