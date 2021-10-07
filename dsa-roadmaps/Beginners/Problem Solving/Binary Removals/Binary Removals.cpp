#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

template <typename T>
T prime(T a){
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
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int yoyo=0,hoho=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' && s[i+1]=='1'){
                yoyo=1;
                i++;
            }
            if((s[i]=='0') && (s[i+1]=='0') && (yoyo==1)){
                hoho=1;
                break;
            }

        }
        if(hoho==1){
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
        }
    }

    return 0;
}
