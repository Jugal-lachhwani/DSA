#include<iostream>
#include<queue>
using namespace std;
int i = 0;
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
void preorder(int a[],struct node* one)
{
    if(one == NULL)
        return;
    else{
        preorder(a,one->left);
        cout << one->data << " ";
        a[i] = one->data;
        i++;
        preorder(a,one->right);
    }
}
int main()
{
    int a[10];
    struct node* root = nullptr;
    root = insertion(root, 5);
    root = insertion(root, 3);
    root = insertion(root, 6);
    root = insertion(root, 2);
    root = insertion(root, 4);
    root = insertion(root, 1);
    cout << "\nThe inorder traversal of the constructed BST is: ";  // Output: 50 30 20 40 70 
    preorder(a,root);
    cout << "\nEnter the kth numBer: ";
    int k;
    cin >> k;
    cout << "The Kth number is: " << a[k-1]; // Output: The 3rd number is: 30
    return 0;
}