#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* head;
    Node* next;
};

Node* MergeK(Node* arr[],int k){
    int i=0;
    int last=k-1;
    int j;
    while(last!=0){
        i=0;
        j=last;
        while(i<j){
            arr[i]=MergeK(arr[i],arr[j]);
            i++;
            j--;
            if(i>=j){
                last=j;
            }
        }
    }
    return arr[0];
}

Node* createNode(int data){
    Node* head = new Node(data);
}

Node* flatten(Node* root){
    if(root==NULL || root->next==NULL)
        return root;
    return merge(root,flatten(root->next));
}