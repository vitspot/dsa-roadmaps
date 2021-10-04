# include <iostream>
using namespace std;

int main()
{
     int n;
    cout << "Enter limit: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m = sizeof(a) / sizeof(a[0]);

    int x = a[m - 1], i;
    for (i = m - 1; i > 0; i--)
    a[i] = a[i - 1];
    a[0] = x;

    for (i = 0; i < n; i++){
        cout << a[i];
    }

    return 0;
}
