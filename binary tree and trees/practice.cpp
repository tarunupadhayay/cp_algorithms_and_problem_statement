#include<bits/stdc++.h>
using namespace std;

class node{
    int data;
    node* left;
    node* right;
    public:
         node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

node* buildTree(node* root)
{
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter Data for Left node of the "<<data<<" : "<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter Data for Right node of the "<<data<<" : "<<endl;
    root->right = buildTree(root->right);

    return root;

}

void print(node* root)
{
    
}


int main()
{
    node* root = NULL;
    buildTree(root);
    print(root);

    return 0;
}