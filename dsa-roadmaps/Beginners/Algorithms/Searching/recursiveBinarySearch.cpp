#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x);
int binarySearch(int arr[], int l, int r, int x){
    if(r>=l){
        int mid = l+(r-l)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return binarySearch(arr, l, mid-1, x);
        }
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}

int main(){
    int n, numToSearch;
    cout<<"Enter number of elements ?"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter element to be searched ?"<<endl;
    cin>>numToSearch;
    int m = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, m-1, numToSearch);
    cout<<"*** Elements of Array ***"<<endl;
    for(int i=0;i<n;i++){
        cout<<"\t"<<arr[i]<<endl;
    }
    if(result == -1){
        cout<<"Element not found in the array"<<endl;
    } else {
        cout<<"Element is found at position: "<<result+1<<endl;
    }
    return 0;
}


