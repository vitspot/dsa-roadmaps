class Solution {
    // Function to reverse first k elements of a queue.
    public Queue<Integer> modifyQueue(Queue<Integer> q, int k) {
        Stack<Integer> stack=new Stack<>();
        for(int i=0;i<k;i++){
            int x=q.poll();
            stack.push(x);
        }
        Queue<Integer> queue=new LinkedList<>();
        while(!stack.isEmpty()){
            queue.add(stack.pop());
        }
        while(!q.isEmpty()){
            queue.add(q.poll());
        }
        return queue;
    }
}