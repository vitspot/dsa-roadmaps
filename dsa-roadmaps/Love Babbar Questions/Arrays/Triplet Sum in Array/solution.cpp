// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int nums[], int n, int sum)
    {
        //Your Code Here
        if(n<3)
            return 0;
        
        sort(nums, nums+n);
        
        for(int i=0; i<n-2; i++)
        {
                int lo = i+1, hi = n-1, sumfin = sum-nums[i];
                while(lo<hi)
                {
                    if(nums[lo]+nums[hi]==sumfin)
                        return 1;
                    else if(nums[lo]+nums[hi]<sumfin)
                        lo++;
                    else
                        hi--;
                }
        }
        return 0;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends