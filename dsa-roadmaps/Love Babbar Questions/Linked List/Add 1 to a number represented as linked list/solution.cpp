//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        Node* last = NULL;
    Node* cur = head;
 
    // Iterate till the last node
    while (cur->next != NULL) {
 
        if (cur->data != 9) {
            last = cur;
        }
        cur = cur->next;
    }
 
    // If last node is not equal to 9
    // add 1 to it and return the head
    if (cur->data != 9) {
        cur->data++;
        return head;
    }
 
    // If list is of the type 9 -> 9 -> 9 ...
    if (last == NULL) {
        last = new Node(0);
        //last->data = 0;
        last->next = head;
        head = last;
    }
 
    // For cases when the rightmost node which
    // is not equal to 9 is not the last
    // node in the linked list
    last->data++;
    last = last->next;
 
    while (last != NULL) {
        last->data = 0;
        last = last->next;
    }
 
    return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends