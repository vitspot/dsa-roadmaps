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

void deleteNode(Node* &head,int key){
    Node* temp = head;
    Node* prev = NULL;
    if(temp!=NULL && temp->data==key){
        head = temp->next;
        delete temp;
        return;

    }
    else{
        while(temp!=NULL && temp->data!=key){
            prev = temp;
            temp = temp->next;
    }
    if(temp == NULL){
        cout<<"Key not in present in linked list\n";
        return;
    }
    prev->next=temp->next;
    delete temp;
    }
}

void deleteNodeRecur(Node* &head, int key){
    if(head == NULL){
        cout<<"Element not present\n";
        return;
    }
    if(head->data == key){
        Node* n = head;
        head = head->next;
        delete(n);
        return;
    }
    deleteNodeRecur(head->next,key);
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

    deleteNode(head,1);
    deleteNodeRecur(head,5);
    
    printList(head);
}