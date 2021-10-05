#include<iostream>
using namespace std; 
int linearSearch(int arr[], int, int, int);
int linearSearch(int arr[],int l,int r,int x) {
    if (r<l) {
        return -1;
    } else if(arr[l]==x) {
        return l;
    } else if(arr[r]==x) {
        return r;
    } else {
        linearSearch(arr,l+1,r-1,x);
    }
}
int main(){
    int n, numToSearch;
    cout<<"Enter number of elements in Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Element to be searched for: ";
    cin>>numToSearch;
    int index=linearSearch(arr,0,n-1,numToSearch);
    if(index!=-1){
        cout<<numToSearch<<" is found at index "<<index;
    } else {
        cout<<"Element not found !"<<endl;
    }
    return 0;
}
