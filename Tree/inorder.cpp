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
void inorder(struct node* one)
{
    if(one == NULL)
        return;
    else{
        inorder(one->left);
        cout << one->data << " ";
        inorder(one->right);
    }
}
int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout << "Inorder traversal: ";
    inorder(root);
    return 0;
}