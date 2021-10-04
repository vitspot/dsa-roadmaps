#include<iostream>
#include<climits>
using namespace std;

int maxSum(int a[], int s)
{
    int max1=INT_MIN, max2 = 0;

    for (int i = 0; i < s; i++)
    {
        max2 = max2 + a[i];
        if (max1 < max2)
            max1 = max2;

        if (max2 < 0)
            max2 = 0;
    }
    return max1;
}

int main()
{
    int n;
    cout << "Enter limit: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSum(a, m);
    cout << max_sum;
    return 0;
}
