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

node* build_tree(node* root)
{
    cout<<"Enter the data for node : ";
    int data;
    cin>>data;
    cout<<endl;
    if(data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout<<"Enter data in left child of "<<data<<endl;
    root->left = build_tree(root->left);
    cout<<"Enter data in right child of "<<data<<endl;
    root->right = build_tree(root->right);
    return root;

}

void levelOrder(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node* root = NULL;
    root = build_tree(root);
    cout<<"Print the data of Tree in level order : "<<endl;
    levelOrder(root);

    return 0;
}