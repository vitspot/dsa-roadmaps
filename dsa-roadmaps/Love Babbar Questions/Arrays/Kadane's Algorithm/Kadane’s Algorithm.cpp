#include<iostream>
#include<climits>
using namespace std;

int maxSum(int a[], int size)
{
    int max1=INT_MIN, max2 = 0;

    for (int i = 0; i < size; i++)
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
    cout << "Enter limit: " << endl;
    cin>>n;
    int a[n];
    //  store input from user to array
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSum(a, m);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
