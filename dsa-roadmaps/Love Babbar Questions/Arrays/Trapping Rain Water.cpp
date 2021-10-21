using namespace std;

int main() {
    int t,n,i,j;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        int arr[n];
        int left[n],right[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        j=n-2;
        for(i=1;i<n;i++)
        {
            left[i]=max(arr[i],left[i-1]);
            right[j]=max(arr[j],right[j+1]);
            j--;
        }
        int ans=0;
        for(i=0;i<n;i++)
            ans+=min(left[i],right[i])-arr[i];
            
        cout<<ans<<endl;
    }
	//code
	return 0;
}
