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
node* insertion(node* root,int x)
{
    if(root == nullptr)
        return new node(x);
    if(root->data > x)
        root->left = insertion(root->left,x);
    else if(root->data < x)
        root->right = insertion(root->right,x);
    return root;
}
void preorder(struct node* one)
{
    if(one == NULL)
        return;
    else{
        cout << one->data << " ";
        preorder(one->left);
        preorder(one->right);
    }
}
void binararyprintttree(node* root,int x)
{
    if(root == nullptr)
    {
        cout<<"NULL";
        return ;
    }
    if(root->data == x){
        preorder(root);
        return;}
    if(root->data > x)
        binararyprintttree(root->left,x);
    else
        binararyprintttree(root->right,x);
}
bool search(node* root,int x)
{
    if(root == nullptr)
        return false;
    if(root->data == x){
        return true;}
    if(root->data > x)
        search(root->left,x);
    else
        search(root->right,x);
}
int main()
{
    node* root = nullptr;
    root = insertion(root,4);
    root = insertion(root,2);
    root = insertion(root,7);
    root = insertion(root,1);
    root = insertion(root,3);
    int val;
    cout<<"Enter the value to search: ";
    cin>>val;
    binararyprintttree(root,val);
}
