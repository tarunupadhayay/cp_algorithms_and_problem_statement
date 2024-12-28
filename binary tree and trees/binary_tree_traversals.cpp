#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int d) 
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter data into node : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
    {
        return NULL;
    }
    cout<<"Enter data into left node "<<data<<" :- "<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data into right node "<<data<<" :- "<<endl;
    root->right = buildTree(root->right);

    return root;
}

// LRN --> left right node
void inorder(node* root){
    // base case
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// LNR --> left node right
void preorder(node* root){
    // base case
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// NLR --> node left right
void postorder(node* root){
    // base case
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = NULL;
    //create the node
    // data = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout<<"Inorder traversal is : ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal is : ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal is : ";
    postorder(root);
    cout<<endl;
    return 0;
}