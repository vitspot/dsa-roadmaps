#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n,k;
        cin >>  n >> k ;
        vector<int> v;
        int x,bc=0;
        for(int i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
            if(!(i==0)){
                if((k-(v[i]+v[i-1]))>0){
                    bc+=(k-(v[i]+v[i-1]));
                    v[i]+=(k-(v[i]+v[i-1]));
                }
            }
        }
        cout << bc << "\n";
        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    solve(t);
    return 0;
}
