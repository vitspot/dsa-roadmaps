// https://practice.geeksforgeeks.org/problems/max-rectangle/1

#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=a; i>=b; i--)
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define vvi vector<vi>
#define pb push_back
#define ff first
#define ss second
#define ll long long


int largest_histogram(vi &v){
    int n=v.size();
    vi left(n), right(n);
    stack<int> st;
    rep(i, 0, n){
        if(st.empty()){
            left[i] = 0;
            st.push(i);
        }
        else{
            while(!st.empty() and v[i]<=v[st.top()]){
                st.pop();
            }
            left[i] = ((st.empty())?0:st.top()+1);
            st.push(i);
        }
    }

    while(!st.empty()) st.pop();

    rrep(i, n-1, 0){
        if(st.empty()){
            right[i]= n-1;
            st.push(i);
        }
        else{
            while(!st.empty() and v[i]<v[st.top()]){
                st.pop();
            }
            right[i] = ((st.empty())?(n-1):st.top()-1);
            st.push(i);
        }
    }
    cout<<endl;
    int max_area = 0;
    rep(i, 0, n){
        max_area = max(max_area, v[i]*(right[i]-left[i]+1));
    }
    return max_area;
}

int largest_rectangle_area(vvi &matrix){
    int max_area = largest_histogram(matrix[0]);
    int n=matrix.size();
    int m=matrix[0].size();
    rep(i,1,n){
        rep(j, 0, m){
            if(matrix[i][j]) // if matrix[i][j]  is 1 then add prev
                matrix[i][j]=matrix[i][j]+matrix[i-1][j];
        }
        max_area=max(max_area, largest_histogram(matrix[i]));
    }
    return max_area;
}

int main(){
    vvi v={{0,1,1,0},
         {1,1,1,1},
         {1,1,1,1},
         {1,1,0,0}};

    cout<<largest_rectangle_area(v)<<endl;
    return 0;
}

