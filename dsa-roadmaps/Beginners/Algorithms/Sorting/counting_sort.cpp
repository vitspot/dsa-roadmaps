#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void countSort(int a[], int n) //O(n+k)
{
  int max = *max_element(a,a+n); //max=k
  int count[max+1] = {0};

  for(int i=0; i<n; i++)
  {
    count[a[i]]++;
  }
   
  for(int i=1; i<=max; i++)
  {
    count[i]+=count[i-1];
  } 

  int b[n]={0};
 
  //start from end to maintain the stability of sorting
  for(int i=n-1; i>=0; i--)
  {
    count[a[i]]--;
    b[count[a[i]]] = a[i];
  }

  for(int i=0; i<n; i++)
  {
    cout<<b[i]<<" ";
  }
  
}

int32_t main()
{
  IOS;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  countSort(arr, n);
  return 0;
}
