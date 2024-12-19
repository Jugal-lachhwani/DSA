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

// In-order traversal
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

// Function to delete the rightmost node
node* deleteright(node* root)
{
    if(root == NULL)
        return NULL;

    // Special case: the root has no children
    if(root->left == NULL && root->right == NULL)
    {
        delete root;
        return NULL;
    }

    node* parent = NULL;
    node* current = root;

    // Traverse to find the rightmost node
    while(current->right != NULL)
    {
        parent = current;
        current = current->right;
    }

    // If rightmost node is found, delete it
    if(parent != NULL)
    {
        parent->right = NULL;
        delete current;
    }

    return root;
}

int main()
{
    // Create the root node
    struct node* one = new node(5);
    one->left = new node(10);
    one->right = new node(15);
    one->right->left = new node(9);
    one->right->right = new node(20);

    cout << "Before Deleting Rightmost Node: ";
    inorder(one);

    deleteright(one);

    cout << "\nAfter Deleting Rightmost Node: ";
    inorder(one);

    return 0;
}
