#include <iostream>
using namespace std;

int main(){
    int n,i;
    char temp;
    string a;
    cout<<"Enter the string:";
    cin>>a;
    n=a.length();

    for(i=0; i<n/2; i++) {
            temp= a[i];
            a[i]= a[n-1-i];
            a[n-1-i]= temp;
        }

cout<<"reversed string:";
 for(i=0;i<=n;i++)
 cout<<a[i];
    return 0;
}

