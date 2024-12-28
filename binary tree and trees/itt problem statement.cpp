#include<bits/stdc++.h>
using namespace std;

class node{
public:
	string data;
	node* left;
	node* right;
	node(string d){
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};

node* buildTree(node* root,int level){
	if(level == 1)
    {
        cout<<"Enter City : "<<endl;
    }
    else if(level == 2)
    {
        cout<<"Enter Sub Urban : "<<endl;
    }
    else
    {
        cout<<"Enter Corporations : "<<endl;
    }
	string data;
	cin>>data;
	root = new node(data);

	if(data == "-1"){
		return NULL;
	}

    if(level == 2 || level == 1)
    {
        cout<<"Enter sub urban for inserting in left : "<<data<<endl;
	    root->left = buildTree(root->left,level + 1);

        cout<<"Enter sub urban for inserting in Right : "<<data<<endl;
	    root->right = buildTree(root->right,level + 1);
    }
    else
    {
        cout<<"Enter Corporations for inserting in left : "<<data<<endl;
	    root->left = buildTree(root->left,level + 1);

        cout<<"Enter Corporations for inserting in Right : "<<data<<endl;
	    root->right = buildTree(root->right,level + 1);
    }
	return root;
}

void traversal(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    traversal(root->left);
    traversal(root->right);
}

bool findPath(node* root, vector<string>& path, string k)
{
    if (root == NULL)
        return false;
    path.push_back(root->data);
 
    if (root->data == k)
        return true;
 
    if ((root->left && findPath(root->left, path, k))
        || (root->right && findPath(root->right, path, k)))
        return true;

    path.pop_back();
    return false;
}
 
string find(node* root, string n1, string n2)
{
    vector<string> path1, path2;
    if (!findPath(root, path1, n1)
        || !findPath(root, path2, n2))
        return "no";
 
    int i;
    for (i = 0; i < path1.size() && i < path2.size(); i++)
        if (path1[i] != path2[i])
            break;
    return path1[i - 1];
}

bool hpath(node *root, vector<string>& arr, string x)
{
    if (!root)
        return false;
     
    arr.push_back(root->data);   
     
    if (root->data == x)   
        return true;
     
    if (hpath(root->left, arr, x) ||
        hpath(root->right, arr, x))
        return true;
     
    arr.pop_back();
    return false;           
}

void path(node *root, string x)
{
    vector<string> arr;
     
    if (hpath(root, arr, x))
    {
        for (int i=0; i<arr.size()-1; i++)   
            cout << arr[i] << " ";
        cout << arr[arr.size() - 1]<<" ";
    }
     
    else
        cout << "No Path";
}

int main()
{
    node* root = NULL;
    root = buildTree(root,1);
    traversal(root);
    cout<<endl;
    cout<<"Enter 2 nodes which you have to find common points : ";
    string a,b;
    cin>>a;
    cin>>b;
    string x = find(root, a, b);
    path(root,x);
    return 0;
}