#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        right=left=NULL;
    }
};

bool childsum(Node *root){
    if(root==NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    int sum=0;
    if(root->left !=NULL){
        sum+=root->left->data;
    }
    if(root->right !=NULL){
        sum+=root->right->data;
    }
    if(sum == root->data && childsum(root->left) && childsum(root->right)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Node *root = new Node(10);
    root->right = new Node(5);
    root->left = new Node(5);
    cout<<childsum(root)<<endl;
    return 0;
}