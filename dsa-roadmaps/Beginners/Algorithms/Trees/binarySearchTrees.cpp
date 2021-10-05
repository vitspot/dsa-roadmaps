#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
struct node {
    int data;
    struct node *left_child;
    struct node *right_child;
};
struct node *newNode(int n) {
    struct node *node = new struct node;
    node->data = n;
    node->left_child = NULL;
    node->right_child = NULL;
};
struct node *find_minimum(struct node *root);
void inorder_traversal(struct node *p) {
    if (p == NULL)
        return;
    inorder_traversal(p->left_child);
    cout << p->data << " ";
    inorder_traversal(p->right_child);
}
void preorder_traversal(struct node *p) {
    if (p == NULL)
        return;
    cout << p->data << " ";
    preorder_traversal(p->left_child);
    preorder_traversal(p->right_child);
}
void postorder_traversal(struct node *p) {
    if (p == NULL)
        return;
    postorder_traversal(p->left_child);
    postorder_traversal(p->right_child);
    cout << p->data << " ";
}
struct node *insert(struct node *root, int n) {
    if (root == NULL)
    {
        return newNode(n); //Creating the main root node
    }
    else if (n > root->data)
    {
        root->right_child = insert(root->right_child, n);
    }
    else if (n < root->data)
    {
        root->left_child = insert(root->left_child, n);
    }
    return root;
}

struct node *del(struct node *root, int key) {
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left_child = del(root->left_child, key);
    else if (key > root->data)
        root->right_child = del(root->right_child, key);
    else {
        // node with only one child or no child
        if (root->left_child == NULL) {
            struct node *temp = root->right_child;
            free(root);
            return temp;
        } else if (root->right_child == NULL) {
            struct node *temp = root->left_child;
            free(root);
            return temp;
        }
        // node with two children:
        struct node *temp = find_minimum(root->right_child);
        // Copy the inorder
        root->data = temp->data;
        // Delete the inorder successor
        root->right_child = del(root->right_child, temp->data);
    }
    return root;
}

struct node *find_minimum(struct node *root) {
    if (root == NULL)
        return NULL;
    else if (root->left_child != NULL)
        return find_minimum(root->left_child);
    return root;
}
struct node *max_element(struct node *root) {
    struct node *temp = root;
    while (temp->right_child != NULL)
        temp = temp->right_child;
    return temp;
}
int main() {
    /* Let us create following BST
 50
 / \
 30 70
 / \ / \
 20 40 60 80 */
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
    cout << "**BST**" << endl;
    int choice, x, k, a;
    struct node *t;
    struct node *temp;
    while (choice != 10) {
        cout << "Options available are:-" << endl;
        cout << "1.Insert an element into BST\n2.Deletion of Node\n3.Inorder Traversal\n4.Preorder Traversal\n5.Postorder Traversal\n6.Minimum element\n7.Maximum element\n8.Exit " << endl;
        cin >>choice;
        switch (choice) {
        case 1:
            cout << "Enter the number to be inserted" << endl;
            cin >> x;
            insert(root, x);
            break;
        case 2:
            cout << "Enter the element to be deleted " << endl;
            cin >> x;
            del(root, x);
            inorder_traversal(root);
            cout << "\n";
            break;
        case 3:
            inorder_traversal(root);
            cout << "\n";
            break;
        case 4:
            preorder_traversal(root);
            cout << "\n";
            break;
        case 5:
            postorder_traversal(root);
            cout << "\n";
            break;
        case 6:
            t = find_minimum(root);
            cout << t->data << endl;
            break;
        case 7:
            temp = max_element(root);
            cout << temp->data << endl;
            break;
        case 8:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }
    return 0;
}