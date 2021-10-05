#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int prime(int a){
    int c=0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            c++;
        }
        if(c>0){
            return 0;
        }
    }
    return 1;
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,y;
    double x;
    cin >> n;
    long long arr[n],count=0;
    for(int i=0;i<n;i++){ 
        cin >>arr[i];
    }
    for(int i=0;i<n;i++){
        x=sqrt(arr[i]);
        y=sqrt(arr[i]);
        if(x==y && arr[i]!=1){
            if(prime(y))
            cout << "YES" << "\n";
            else
            cout << "NO" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}
