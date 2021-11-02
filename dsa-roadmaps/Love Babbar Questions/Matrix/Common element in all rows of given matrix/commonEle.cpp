// https://www.geeksforgeeks.org/common-elements-in-all-rows-of-a-given-matrix/
// Common Element in each row

#include<bits/stdc++.h>
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


void printCommonElements(vvi matrix){
	int n=matrix.size();
	int m=matrix[0].size();

	unordered_map<int, int> mp;

	rep(i, 0, m)
		mp[matrix[0][i]] = 1;

	rep(i, 1, n){
		rep(j, 0, m){
			if(mp[matrix[i][j]] == i) //check for repeated ele in same row
				mp[matrix[i][j]]++;
			if(i==n-1 and mp[matrix[i][j]]==n)
				cout<<matrix[i][j]<<" ";
		}
	}
}

int main(){

	vvi matrix ={
		{1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
	};

	printCommonElements(matrix);
	return 0;
}