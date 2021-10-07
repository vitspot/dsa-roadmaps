#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,w;
    cin>>h>>w;
    vector<vector<int>> v;
    
    for(int i=0;i<h+2;i++)
    {
        vector<int> vv;
        for(int j=0;j<w+2;j++)
        {
            if(i==0 || j==0 || i==h+1 || j==w+1)
            {
                vv.push_back(0);
            }
            else
            {
                int k;
                cin>>k;
                vv.push_back(k);
            }
        }
        v.push_back(vv);
    }
    int ar=0;
    int aa=h*w;
    for(int i=1;i<h+1;i++)
    {
        for(int j=1;j<w+1;j++)
        {
            //cout<<v[i][j]<<" ";
            if(v[i][j]>v[i-1][j])
            {
                ar=ar+v[i][j]-v[i-1][j];
            }
            if(v[i][j]>v[i+1][j])
            {
                ar=ar+v[i][j]-v[i+1][j];
            }
            if(v[i][j]>v[i][j-1])
            {
                ar=ar+v[i][j]-v[i][j-1];
            }
            if(v[i][j]>v[i][j+1])
            {
                ar=ar+v[i][j]-v[i][j+1];
            }
        }
        //cout<<endl;
    }
    cout<<ar+2*aa;
    

}
