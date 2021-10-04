// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static bool comp(Job a,Job b){//for sorting profit in decreasing order
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) //job is a structure here
    { 
       sort(arr,arr+n,comp);
       
       bool done[n]={0};//array for solving problem
       
       int day =0, profit=0;
       
       for(int i=0; i<n; i++){//doing deadline-1 as it is a zero based indexing 
           for(int j=min(n,arr[i].dead-1);j>=0;j--){//taking min of n and deadline as given n(in question) can be greater than size of array done[n]
                 //each arr[] element has a deadline
               if(done[j]==false){
                   
                   day+=1;
                   
                   profit+=arr[i].profit;
                   
                   done[j]=true;
                   
                   break;
               }
           }
       }
       return{day,profit}; 
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends