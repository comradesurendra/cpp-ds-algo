#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        left=right=NULL;
    }
};

//Levelorder
void Levelorder(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false){
        Node *a = q.front();
        q.pop();
        cout<<a->data<<" ";
        if(a->left!=NULL){
            q.push(root->left);
        }
        if(a->right!=NULL){
            q.push(root->right);
        }
    }
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    Levelorder(root);
    return 0;
}