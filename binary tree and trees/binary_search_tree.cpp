#include <bits/stdc++.h>
using namespace std;

int c = 0;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};

node* buildTree(node* root){
	cout<<"enter any data : "<<endl;
	int data;
	cin>>data;
	root = new node(data);

	if(data == -1){
		return NULL;
	}

	cout<<"Enter data for inserting in left : "<<data<<endl;
	root->left = buildTree(root->left);

	cout<<"Enter data for inserting in Right : "<<data<<endl;
	root->right = buildTree(root->right);

	return root;
}

void levelorderTraversal(node* root)
{
     queue<node*> q;
	 q.push(root);
	 q.push(NULL) ;
	 while(!q.empty()){
		node* temp = q.front();
		q.pop();

		if(temp == NULL)
		{
			cout<<endl;
			c++;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
				if(temp->left){
				q.push(temp->left);
			}

			if(temp->right){
				q.push(temp->right);
			}
		}
	 }
}

void buildFromLevelOrder(node* &root)
{
	queue<node*> q;
	cout<<"Enter data for root : "<<endl;
	int data;
	cin>>data;
	root = new node(data);
	q.push(root);

	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		cout<<"Enter left node for : "<<temp->data<<endl;
		int leftData;
		cin>>leftData;

		if(leftData != -1){
			temp->left = new node(leftData);
			q.push(temp->left);
		}
		cout<<"Enter right node for : "<<temp->data<<endl;
		int rightData;
		cin>>rightData;

		if(rightData != -1){
			temp->right = new node(rightData);
			q.push(temp->right);
		}
	}
}

int main()
{
	node* root = NULL;
	buildFromLevelOrder(root);
  //creating the tree : 
    // root = buildTree(root);
	// data = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	// data for build tree from level order traversal : 
	// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
	cout<<"Print the Data present the tree : "<<endl;
	levelorderTraversal(root);


	return 0;
}