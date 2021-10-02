// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int k)
    {
       
        int windowSum = 0;
        int len = INT_MAX;
        int left = 0;
     
        for (int right = 0; right < n; right++)
        {
            windowSum += arr[right];
            while (windowSum > k && left <= right)
            {
                len = min(len, right - left + 1);
                windowSum -= arr[left];
                left++;
            }
        }
        return len;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends