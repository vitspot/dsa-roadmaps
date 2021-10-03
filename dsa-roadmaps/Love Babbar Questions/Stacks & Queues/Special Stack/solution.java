class solution{
	public void push(int a,Stack<Integer> s)
	{
	    s.push(a);
	}
	public int pop(Stack<Integer> s)
    {
        return s.pop();
	}
	public int min(Stack<Integer> s)
    {
        int min=s.peek();
        for(int i=0;i<s.size();i++){
            if(min>s.get(i)) min=s.get(i);
        }
        return min;
	}
	public boolean isFull(Stack<Integer>s, int n)
    {
        if(s.size()==n) return true;
        else return false;
	}
	public boolean isEmpty(Stack<Integer>s)
    {
        if(s.size()==0) return true;
        else return false;
	}
}