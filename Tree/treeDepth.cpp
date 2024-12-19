#include<iostream>
#include<queue>
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

// Function to print the depth of tree

void printDepth(node* root)
{
    if (root == NULL)
        return;
    queue<node*> q;
    q.push(root);
    int depth = 0;
    while (!q.empty())
    {
        int count = q.size();
        while (count--)
        {
            node* temp = q.front();
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        depth++;
    }
    cout << "Depth of the tree is: " << depth << endl;
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
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << "Preorder traversal of binary tree is: ";
    preorder(root);
    cout << "\nDepth of the tree is: ";
    printDepth(root);
    return 0;
}