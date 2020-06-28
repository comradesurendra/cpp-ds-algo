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

//Inorder
void Inorder(Node *root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

//Preorder
void Preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

//Postorder
void Postorder(Node *root){
    if(root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);

    Inorder(root);
    cout<<endl;
    Preorder(root);
    cout<<endl;
    Postorder(root);


    return 0;
}
