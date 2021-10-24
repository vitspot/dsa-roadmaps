// https://www.geeksforgeeks.org/find-a-specific-pair-in-matrix/
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

void printV(vvi &matrix, int r, int c){
	rep(i,0,r){
    	rep(j, 0, c)
    		cout<<matrix[i][j]<<" ";
    		cout<<endl;
    }
}

int max_pair_sum(vvi mat){
	int r=mat.size();
	int c=mat[0].size();
    vvi new_mat(r, vi(c,0));
    // last value same as that of orignal matrix
    new_mat[r-1][c-1] = mat[r-1][c-1];
    int max_val=INT_MIN;

    // add last column
    rrep(i, r-2, 0){
    	new_mat[i][c-1] = max(new_mat[i+1][c-1], mat[i][c-1]);
    }

    // add last row
    rrep(i, c-2, 0){
    	new_mat[r-1][i] = max(new_mat[r-1][i+1], mat[r-1][i]);
    }

    rrep(i, r-2, 0){
    	rrep(j, c-2, 0){
    		// updating answer
    		max_val= max(max_val, new_mat[i+1][j+1]-mat[i][j]);
    		// updating matrix
    		new_mat[i][j] = max(mat[i][j], max(new_mat[i+1][j], new_mat[i][j+1]));
    	}
    }

    // printV(new_mat, r, c);
    return max_val;
}

int main(){
	int n=5;
    vvi v{
    	{ 1, 2, -1, -34, -20 },
        { -8, -3, 4, 2, 1 },
        { 3, 8, 6, 1, 3 },
        { -4, -1, 1, 7, -6 },
        { 0, -4, 10, -5, 1 }
    };

    cout<<max_pair_sum(v)<<endl;
    return 0;
}
