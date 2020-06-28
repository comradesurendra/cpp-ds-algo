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

bool isBalance(Node *root, int *height){
    if(root == NULL){
        *height = 0;
        return true;
    }
    int rh=0;
    int lh=0;
    bool alh=isBalance(root->left,&lh);
    bool brh=isBalance(root->right,&rh);
    if(abs(lh-rh)>1){
        return false;
    }
    *height = max(lh,rh) + 1;
    return (alh&&brh); 
}

int main(){
    Node *root = new Node(10);
    root->right = new Node(20);
    root->left = new Node(30);
    int *height = 0;
    cout<<isBalance(root,height);
    return 0;
}