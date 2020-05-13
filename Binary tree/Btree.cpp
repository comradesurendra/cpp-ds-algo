#include<iostream>
using namespace std;


template<typename T> //When ever we define the template we have to specify the data type while creating the object of the class.
//when ever we create the template class we have to define the typename to specify the data type.
class Btree{
    public:
    T data; // represent the data at the root node
    Btree *left; // Represent the left child of tree
    Btree *right;// Represent the right child of tree

    // When ever we create the instance by constructor we define the defaul value of child to null 
    Btree(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

};

void printTree(Btree<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";

    if(root->left != NULL){
        cout<<root->left->data<<" ";
    }
    if(root->right!=NULL){
        cout<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

Btree<int> *inputTree(){
    int rot;
    cin>>rot;
    if(rot == -1){
        return NULL;
    }
    Btree<int> *root = new Btree<int>(rot);
    Btree<int> *leftchild = inputTree();
    Btree<int> *rightchild = inputTree();
    root->left = leftchild;
    root->right = rightchild;
    return root;
}


int main(){
    
       /* Btree<int> *root = new Btree<int>(10);
        Btree<int> *node1 = new Btree<int>(20);
        Btree<int> *node2 = new Btree<int>(30);
        Btree<int> *node3 = new Btree<int>(40);
        Btree<int> *node4 = new Btree<int>(50);

        root->left = node1;
        root->right = node2;
        node1->left = node3;
        node1->right = node4;*/
        Btree<int> *root = inputTree();

        printTree(root);
        return 0;
}