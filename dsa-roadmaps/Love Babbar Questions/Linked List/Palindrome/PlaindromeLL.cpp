#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* head;
    Node* next;
};

bool Palindrome(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
}

Node* prev =NULL;
Node* next;
Node* curr=slow;

while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}

fast=head;
while(prev!=NULL){
    if(fast->data!=prev->data){
        return false;
    }
    fast=fast->next;
    prev=prev->next;
}

Node* createNode(int data){
    Node* head = new Node(data);
}

int main(){
createNode(1);
createNode(3);
Palindrome(head);
}