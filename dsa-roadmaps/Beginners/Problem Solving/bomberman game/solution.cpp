#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c,n;
    cin>>r>>c>>n;
    vector<vector<int>> v;
    for(int i=0;i<r;i++)
    {
        vector<int> vv;
        for(int j=0;j<c;j++)
        {
            char k;
            cin>>k;
            int kk;
            if(k=='O')
            {
                kk=3;
            }
            else
            {
                kk=0;
            }
            
            vv.push_back(kk);
        }
        v.push_back(vv);
    }
    if(n%2==0)
    {
        for(int i=0;i<r;i++)
        {
           
            for(int j=0;j<c;j++)
            {
                cout<<"O";
            }
            cout<<endl;
        }
    }
    else if(n==1)
    {
        for(int i=0;i<r;i++)
        {
           
            for(int j=0;j<c;j++)
            {
                if(v[i][j]>0)
                {
                    cout<<"O";
                }
                else
                {
                    cout<<".";
                }
                
            }
            cout<<endl;
        }
    }
    else
    {
        if(n%4==1)
        {
            n=5;
        }
        else
        {
            n=3;
        }
        int mm=1;
        while(mm!=n+1)
        {
            //cout<<mm<<endl;
            for(int i=0;i<r;i++)
            {
            
                for(int j=0;j<c;j++)
                {
                    if(v[i][j]>0)
                    {
                        v[i][j]--;
                    }
                    if(v[i][j]==-1)
                    {
                        v[i][j]=0;
                    }
                    //cout<<v[i][j];

                    
                }
                //cout<<endl;
            }
            //cout<<endl;
            if(mm%2==0 && mm!=0)
            {
                for(int i=0;i<r;i++)
                {
                
                    for(int j=0;j<c;j++)
                    {
                        if(v[i][j]==0)
                        {
                            v[i][j]=3;
                        }
                        //cout<<v[i][j];
                        
                    }
                    //cout<<endl;
                }
            }
            //cout<<endl;
            if(mm!=1 && mm%2!=0)
            {
                for(int i=0;i<r;i++)
                {
                    
                    for(int j=0;j<c;j++)
                    {
                        if(v[i][j]==0)
                        {
                            if(i+1>=0 && i+1<r && v[i+1][j]!=0)
                            {
                                v[i+1][j]=-1;
                            }
                            if(i-1>=0 && i-1<r && v[i-1][j]!=0)
                            {
                                v[i-1][j]=-1;
                            }
                            if(j+1>=0 && j+1<c && v[i][j+1]!=0)
                            {
                                v[i][j+1]=-1;
                            }
                            if(j-1>=0 && j-1<c && v[i][j-1]!=0)
                            {
                                v[i][j-1]=-1;
                            }
                        }
                        //cout<<v[i][j];
                                                
                    }
                    //cout<<endl;
                }
            }
            mm++;
        }
        for(int i=0;i<r;i++)
        {
           
            for(int j=0;j<c;j++)
            {
                if(v[i][j]>0)
                {
                    cout<<"O";
                }
                else
                {
                    cout<<".";
                }
                
            }
            cout<<endl;
        }
    }
    
}
