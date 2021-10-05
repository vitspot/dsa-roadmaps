#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n)
{
    sort(arr,arr+size);
    bool flag;
    for(int i=size-1;i>=0;i--)
    {
    int x = arr[i] - n;
    flag = binary_search(arr,arr+size,x);
    if(flag == true)
    return flag;
    }
    return flag;

}