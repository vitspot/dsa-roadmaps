#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool comp(pair<int,int>a,pair<int,int>b){//comparator to sort end time in decending
        if(a.second==b.second) return a.first<b.first;//if end time is same then sort with start time
        return a.second < b.second;//else sort with end time 
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) v[i]={start[i],end[i]};//pushing values in pair
        
        sort(v.begin(),v.end(),comp);//O(nlogn)
        int i=0;
        int j=1;
        int c=1;//cpunter is taken as 1 because nothing can disturb last meeting
                //ie last meeting will always be included
        while(j<n){
            if(v[i].second<v[j].first){//main condition
                c++;
                i=j;
                j++;
            }
            else{
                j++;//if that ans is not included
            }
        }
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends