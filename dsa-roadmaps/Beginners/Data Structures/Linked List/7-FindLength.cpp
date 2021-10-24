#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void printList(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

void insertAtEnd(Node* head,int x){
    Node* temp = head;
    Node* new_Node = new Node();
    new_Node->data=x;
    new_Node->next = NULL;

    if(head == NULL){
        head = new_Node;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_Node;
    return;
}

int getCount(Node* head)
{
    int count = 0; // Initialize count
    Node* current = head; // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int getCountRecur(Node* head)
{
    // Base Case
    if (head == NULL) {
        return 0;
    }
    // Count this node plus the rest of the list
    else {
        return 1 + getCount(head->next);
    }
}

int main(){
    Node* head = NULL;
    head = new Node();
    head->data = 1;
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    insertAtEnd(head,7);

    cout<<getCount(head)<<endl;
    cout<<getCountRecur(head)<<endl;
    
    printList(head);
}