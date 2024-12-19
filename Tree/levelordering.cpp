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
bool insertNode(struct node* root, int value)
{
    if (root->left == NULL) {
        root->left = new node(value);
        return true;
    }
    else if (root->right == NULL) {
        root->right = new node(value);
        return true;
    }
    bool inserted = insertNode(root->left, value);
    if (!inserted) {
        inserted = insertNode(root->right, value);
    }

    return inserted;
}
void leftview(struct node* root,int level,int &maxlevel)
{
    if(root==nullptr)
        return;
    if(maxlevel<level){
        cout<<root->data<<endl;
        maxlevel=level;
    }
    leftview(root->left,level+1,maxlevel);
    leftview(root->right,level+1,maxlevel);
}
void rightview(struct node* root,int level,int &maxlevel)
{
    if(root == nullptr)
        return;
    if(maxlevel<level)
    {
        cout<<root->data<<" ";
        maxlevel=level;
    }
    rightview(root->right,level+1,maxlevel);
    rightview(root->left,level+1,maxlevel);
}
int main()
{
     struct node* one = new node(5);
    one->left = new node(10);
    one->right = new node(15);
    insertNode(one, 30);
    insertNode(one, 40);
    insertNode(one, 50);
    cout<<"left View"<<endl;
    int lmaxlevel=0;
    leftview(one,1,lmaxlevel);
    cout<<"right view"<<endl;
    int rmaxlevel=0;
    rightview(one,1,rmaxlevel);
}
