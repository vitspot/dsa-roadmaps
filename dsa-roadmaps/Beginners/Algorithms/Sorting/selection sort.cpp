#include <iostream>
using namespace std;

int main()
{
    string a;
    int n,i, j, m, temp;
    cout<<"Enter the string :";
    cin>>a;
    n=a.length();
      for (i = 0; i < n - 1; i++) {
            m = i;
            for (j = i + 1; j < n; j++)
                  if (a[j] < a[m])
                        m = j;
            if (m != i) {
                  temp = a[i];
                  a[i] = a[m];
                  a[m] = temp;
            }
      }

 cout<<"sorted string:";
 for(i=0;i<=n;i++)
 cout<<a[i]<<" ";
    return 0;
}
