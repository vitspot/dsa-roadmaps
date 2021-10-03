class Solution
{
    //Function to find largest rectangular area possible in a given histogram.
    public static long getMaxArea(long hist[], long n) 
    {
        long [] left=new long[(int)n];
        long [] right=new long[(int)n];
        Stack<Long> stack=new Stack<>();
        
        //left limits calculation
        stack.push((long)0);
        left[0]=(long)0;
        for(long i=1;i<n;i++){
            long height=hist[(int)i];
            long top=stack.peek();
            if(hist[(int)top]>=height){
                long check=stack.peek();
                while(hist[(int)check]>=height){
                    long index=stack.pop();
                    if(stack.isEmpty()){
                        left[(int)i]=0;
                        stack.push(i);
                        break;
                    }
                    check=stack.peek();
                }
                if(stack.peek()!=i){
                    left[(int)i]=stack.peek()+1;
                    stack.push(i);
                }
            }
            else{
                left[(int)i]=stack.peek()+1;
                stack.push(i);
            }
        }
        
        //right limits calculation
        stack=new Stack<>();
        stack.push((long)n-1);
        right[(int)n-1]=(long)n-1;
        for(long i=n-2;i>=0;i--){
            long height=hist[(int)i];
            long top=stack.peek();
            if(hist[(int)top]>=height){
                long check=stack.peek();
                while(hist[(int)check]>=height){
                    long index=stack.pop();
                    if(stack.isEmpty()){
                        right[(int)i]=n-1;
                        stack.push(i);
                        break;
                    }
                    check=stack.peek();
                }
                if(stack.peek()!=i){
                    right[(int)i]=stack.peek()-1;
                    stack.push(i);
                }
            }
            else{
                right[(int)i]=stack.peek()-1;
                stack.push(i);
            }
        }
        
        long area=0;
        for(int i=0;i<n;i++){
            long a=(right[i]-left[i]+1)*hist[i];
            if(area<=a) area=a;
        }
        
        return area;
    }
        
}
