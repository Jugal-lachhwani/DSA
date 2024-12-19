#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* right;
    struct node* left;
    node(int d)
    {
        data = d;
        right = NULL;
        left = NULL;
    }
};

preorder(node* node)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);   
}
int main()
{
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    cout<<"Preorder traversal of binary tree is: ";
    preorder(root);
    return 0;
}