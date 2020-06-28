#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

int main(){
    Node *root = new Node(10);
    root->left = new Node(3);
    root->right = new Node(5);

    cout<<root->data<<" "<< root->left->data<<" "<<root->right->data<<endl;
    return 0;
}