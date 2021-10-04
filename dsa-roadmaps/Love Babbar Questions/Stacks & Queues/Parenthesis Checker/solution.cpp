#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        int n = s.size();
        stack<char> st;
        bool ans = true;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='{'||s[i]=='['||s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')')
            {
                if(!st.empty()&&st.top()=='(')
                    st.pop();
                else
                {
                    ans = false;
                    break;
                }
            }
            else if(s[i]=='}')
            {
                if(!st.empty()&&st.top()=='{')
                    st.pop();
                else
                {
                    ans = false;
                    break;
                }
            }
            else if(s[i]==']')
            {
                if(!st.empty()&&st.top()=='[')
                    st.pop();
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        if(!st.empty()) return false;
        return ans;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends