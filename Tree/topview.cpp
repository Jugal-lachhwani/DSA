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
int a[20];
int i=0;
int leftarray(node *root)
{
    while(root != NULL)
    {
        a[i] = root->data;
        root = root->left;
        i++;
    }
    return i;
}
void reverseleftarray(int i)
{
    int temp;
    for(int j=0; j<i/2; j++)
    {
        temp = a[j];
        a[j] = a[i-j-1];
        a[i-j-1] = temp;
    }
}

int main()
{
    node *root = NULL;
    root = insertion(root, 50);
    root = insertion(root, 30);
    root = insertion(root, 20);
    root = insertion(root, 40);
    root = insertion(root, 70);
    root = insertion(root, 60);
    root = insertion(root, 80);
    cout << "Preorder traversal of the constructed BST is: ";
    preorder(root);
    // int i = leftarray(root);
    // cout<<endl;
    // cout<<i<<endl;
    // reverseleftarray(i);
    // for(int j=0; j<i; j++)
    // {
    //     cout << a[j] << " ";
    // }
    // cout<<endl<<"Traversing reverse left: ";
    // reverselefttraverse(root);
    // return 0;
    cout<<"topView: ";
    topview(root);
}