#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* head;
    Node* next;
    Node* prev;
};

Node* Rotate(Node* head,int N){
    if(N==0){
        return head;
    }
    int count;
    Node* current = head;
    while(count<N && current!=NULL){
        current=current->next;
        count++;
    }
    Node* NthNode = =current;

    while(current->next!=NULL){
        current=current->next;
        current->next=head;
        head->prev=current;
        head=NthNode->next;
        head->prev=NULL;
    }
}

Node* createNode(int data){
    Node* head = new Node(data);
}

int main(){
createNode(1);
createNode(3);
}