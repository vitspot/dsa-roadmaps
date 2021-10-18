#include <bits/stdc++.h>
using namespace std;
int nonDivisibleSubset(int k, vector<int> s) {
    
    int max=0;
    int c=0;
    int d=0;
    if(k%2==0)
    {
        d++;
    }
    for(int i=0;i<s.size();i++)
    {
        s[i]=s[i]%k;
        if(s[i]==0)
        {
            c++;
        }
        if(s[i]==(k/2) && d==1)
        {
            d++;
        }
        cout<<s[i]<<" ";
    }
    cout<<endl;
    if(c!=0)
    {
        max++;
    }
    if(d>1)
    {
        max++;
    }
    for(int i=1;i<=(k/2);i++)
    {
        
        int j=k-i;
        cout<<i<<" "<<j<<endl;
        if(i!=j)
        {
            int a=0;
            int b=0;
            for(int l=0;l<s.size();l++)
            {
                if(s[l]==i)
                {
                    a++;
                }
                if(s[l]==j)
                {
                    b++;
                }
            }
            if(a>b)
            {
                max=max+a;
            }
            else
            {
                max=max+b;
            }
        }
    }
    return max;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int s[n] ;
    for (int i = 0; i < n; i++) {
        int j;
        cin>>j;
        s[i]=j;
    }
    int result = nonDivisibleSubset(k, s);
    cout << result << "\n";
    return 0;
}
