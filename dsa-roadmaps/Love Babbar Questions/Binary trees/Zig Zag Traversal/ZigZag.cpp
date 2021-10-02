#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data=x;
        left=right=NULL;
    }
};

vector <int>  ZigZag(Node *root){
vector<int> ans;
map<int,int> m;
queue<pair<Node*,int>> q;
if(!root){
    return ans;
}

q.push(root);
int f=1;

while(!q.empty()){
    vector<int> temp;
    int sz= q.size();
    while(sz--){
        Node* t= q.front();
        temp.push_back(t->data);
        q.pop();
        if(t->left){
            q.push(t->left);
        }
        if(t->right) {
            q.push(t->right);
        }
    }
    if(f%2==0){
        reverse(temp.begin(),temp.end());
    }
    for(int i=0;i<temp.size();i++){
        ans.push_back(temp);
    }
    f=!f;
}
return ans;
}