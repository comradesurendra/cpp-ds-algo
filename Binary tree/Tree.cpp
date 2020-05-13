#include<iostream>
#include<vector>

using namespace std;

template<typename T>
class Tree{
	public:
	T data;
	vector<Tree*> children;

	Tree(int data){
		this->data = data;
	}
};




void printTree(Tree<int>*root){

	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		printTree(root->children[i]);
	}
}

int main(){
	Tree<int> *root = new Tree<int>(6);
	Tree<int> *node1 = new Tree<int>(3);
	Tree<int> *node2 = new Tree<int>(2);
	Tree<int> *node3 = new Tree<int>(4);
	Tree<int> *node4 = new Tree<int>(5);
	Tree<int> *node5 = new Tree<int>(6);

	root->children.push_back(node1);
	root->children.push_back(node2);
	node1->children.push_back(node3);
	node1->children.push_back(node4);
	node2->children.push_back(node5);

	printTree(root);
	return 0;
}