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

void deleteList(Node* &head){
    Node* current = head;
    Node* next = NULL;

    while(current!=NULL){
        next = current->next;
        delete(current);
        current = next;
    }

    head = NULL;
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
    printList(head);
    cout<<endl;
    deleteList(head);
    printList(head);
}