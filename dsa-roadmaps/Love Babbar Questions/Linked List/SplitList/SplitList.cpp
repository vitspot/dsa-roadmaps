#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* head;
    Node* next;
};

Node* Split(Node* head,Node **head1_ref,Node **head2_ref){
    Node* slow=head;
    Node* fast= head;
    while(fast!=head && fast->next!=head){
        slow=slow->next;
        fast=fast->next->next;
    }
    *head1_ref = head;
    *head2_ref= slow->next;
    slow->next= *head1_ref;
    Node* curr= *head2_ref;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=*head2_ref;
}

Node* createNode(int data){
    Node* head = new Node(data);
}

int main(){
createNode(1);
createNode(3);
Split(head,*head1_ref,*head2_ref);
}