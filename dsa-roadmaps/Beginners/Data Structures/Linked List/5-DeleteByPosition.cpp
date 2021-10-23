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

void deletePos(Node * &head,int pos){
    if(head == NULL){
        cout<<"pos doesn't exist";
        return;
    }

    Node* temp = head;

    if(pos == 0){
        head = temp->next;
        delete(temp);
        return;
    }

    for(int i = 0;temp!= NULL && i<pos -1;i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        return;
    }

    Node* next = temp->next->next;
    delete(temp->next);
    temp->next = next;
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
    // LINKED LIST IS ZERO-INDEXED:
    deletePos(head,4);
    
    printList(head);
}