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

void insertAtEnd(Node* head,int key){
    Node* temp = head;
    Node* new_Node = new Node();
    new_Node->data=key;
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

void insertAfter(Node* node,int key){

    if(node == NULL){
        return;
    }

    Node* new_Node = new Node();
    new_Node->data=key;
    new_Node->next=node->next;
    node->next=new_Node;
}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1;
    
    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    insertAfter(third,6);
    insertAfter(second,7);

    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    
    printList(head);
}