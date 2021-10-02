/* Node is defined as
class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}
*/
class Solution {
    //Function to check if the linked list has a loop.
    public static boolean detectLoop(Node head){
        HashMap<Node,Integer> map=new HashMap<>();
        Node temp=head;
        while(temp!=null){
            if(map.containsKey(temp))
            return true;
            else map.put(temp,0);
            temp=temp.next;
        }
        return false;
    }
}