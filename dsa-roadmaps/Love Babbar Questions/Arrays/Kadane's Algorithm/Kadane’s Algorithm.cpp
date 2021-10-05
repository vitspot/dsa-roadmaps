#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter limit: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m = sizeof(a)/sizeof(a[0]);
    
    int max1=INT_MIN, max2 = 0; // Remember

    for (int i = 0; i < s; i++)
    {
        max2 = max2 + a[i];
        if (max1 < max2)
            max1 = max2;

        if (max2 < 0)
            max2 = 0;
    }
    cout << max1;
    return 0;
}
