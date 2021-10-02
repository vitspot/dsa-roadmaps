class Solution
{
    static void swap(int a[], int i, int j) {
        int temp= a[i];
        a[i]= a[j];
        a[j]= temp;
    }
    
    public static void sort012(int a[], int n)
    {
        int l= 0;
        int r= n-1;
        
        int i= 0;
        
        while(i<=r) {
            if(a[i]==0) {
                swap(a, i, l);
                l++;
            }
            else if(a[i]==2) {
                swap(a, i, r);
                r--;
                continue;
            }
            i++;
        }
        
    }
}