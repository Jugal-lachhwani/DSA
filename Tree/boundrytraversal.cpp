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
bool isleaf(struct node* root)
{

    if(root->left==NULL && root->right==NULL && root != NULL)
        return true;
    return false;
}
void boundryorderlefthelper(struct node* root,int level,int &maxlevel)
{
    if(root==nullptr)
        return;
    if(isleaf(root))
        return;
    if(level>maxlevel)
    {
        cout<<root->data<<" ";
        maxlevel = level;
    }
    boundryorderlefthelper(root->left,level+1,maxlevel);
    boundryorderlefthelper(root->right,level+1,maxlevel);
}
void boundryorderleft(struct node* root)
{
    int maxl = 0;
    boundryorderlefthelper(root,1,maxl);
}

void boundryorderlower(struct node* &root)
{
   if(root == NULL)
    {return;}
    if(isleaf(root)){
        cout<<root->data<<" ";
        return;
    }
    if(root->left!= NULL)
        boundryorderlower(root->left);
    if(root->right != NULL)
       boundryorderlower(root->right);
}
void boundryorderright(struct node* node) {
    if (node == nullptr)
        return;
    if (!isleaf(node)) {
        if (node->right) {
            boundryorderright(node->right);
        } else {
            boundryorderright(node->left);
        }
        cout << node->data << " ";
    }
}
void boundryorder(struct node* root)
{
    if(root != NULL)
        cout<<root->data<<" ";
    else
        return;
    boundryorderleft(root->left);
    boundryorderlower(root);
    boundryorderright(root->right);
}

int main()
{
    // Create the root node
    struct node* one = new node(5);
    one->left = new node(10);
    one->right = new node(15);
    one->left->left = new node(80);
    one->left->right = new node(8);
    one->right->left = new node(90);
    one->right->right = new node(9);
    cout<<"\n Boundary traversal of binary tree is: ";  // 5 10 80 8 90 9 15
    boundryorder(one);

}
