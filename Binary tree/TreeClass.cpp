#include<iostream>
#include<vector>

using namespace std;


template <typename T>
class TreeNode{
	public:
	T data;
	vector<TreeNode*>children;

	TreeNode(int data){
		this->data = data;
	}

};

int main(){
	TreeNode<int>*root = new TreeNode<int>(2);
	TreeNode<int>* node1 = new TreeNode<int>(3);
	TreeNode<int>* node2 = new TreeNode<int>(4);
	root->children.push_back(node1);
	root->children.push_back(node2);

	return 0;
}
