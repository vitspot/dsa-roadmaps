class Solution{
    //Function to check whether there is a subarray present with 0-sum or not.
    static boolean findsum(int arr[],int n)
    {
        HashMap<Integer, Integer> hm= new HashMap<Integer, Integer>();
        int sum= 0;
        for(int i=0; i<n; i++) {
            sum+= arr[i];
            if(hm.get(sum)!=null || sum==0) return true;
            hm.put(sum, i);
        }
        
        return false;
    }
}
