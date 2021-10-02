/*
class Node {
    int data;
    Node next, arb;
    Node(int d) 
    { 
        data = d;
        next = arb = null;   
    }
}*/

class Clone {
    //Function to clone a linked list with next and random pointer.
    Node copyList(Node head) {
        if(head==null)
            return null;
        HashMap<Node,Node> nodeMap=new HashMap<>();
        Node temp=head;
        while(temp!=null){
            Node x=new Node(temp.data);
            nodeMap.put(temp,x);
            temp=temp.next;
        }
        temp=head;
        while(temp!=null){
            nodeMap.get(temp).next=nodeMap.get(temp.next);
             nodeMap.get(temp).arb=nodeMap.get(temp.arb);
            temp=temp.next;
        }
        return nodeMap.get(head);
    }
}