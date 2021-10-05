/* Approach:
The inorder traversal of a BST gives the sorted order of elements in the BST
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
}*root;

struct node* insertNode(struct node* node, int y);
void inorder(struct node* root);

struct node** createQueue(int*, int*);
void enqueue(struct node**, int*, struct node*);
struct node* dequeue(struct node**, int*);
struct node* minValueNode(struct node* node);

//Driver code
int main(){
    int n, r, x;
    struct node* root = NULL;
    printf("Enter the number of elements in the BST: ");
    scanf("%d", &n);
    printf("Enter the elements to be inserted in the desired order: ");
    scanf("%d", &r);
    root = insertNode(root, r);
    for (int i = 0; i < n - 1; i++) {
      scanf("%d", &x);
      insertNode(root, x);
    }
  
    printf("The sorted array of elements is as follows: ");
    inorder(root);
}

struct node* insertNode(struct node* root, int y){
    if (root == NULL){
        struct node* t = (struct node*) malloc(sizeof(struct node));
        t->data = y;
        t->left = t->right = NULL;
        return t;
    }
 
    if (y < root->data)
        root->left = insertNode(root->left, y);
    else if (y > root->data)
        root->right = insertNode(root->right, y);
 
    return root;
}

//Utility functions
void inorder(struct node* root){
    if (root != NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
 
struct node** createQueue(int* front, int* rear){
    struct node** Q = 
        (struct node**) malloc(sizeof(struct node*)*50);
    *front = *rear = 0;
    return Q;
}
 
void enqueue(struct node** Q, int* rear, struct node* newNode){
    Q[*rear] = newNode;
    (*rear)++;
}
 
struct node* dequeue(struct node** Q, int* front){
    (*front)++;
    return Q[*front - 1];
}

struct node* minValueNode(struct node* node){
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
