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


levelorder(struct node* root)
{
    queue<struct node *> q;
    if(root != NULL){
    q.push(root);}
    while(!q.empty()){
    struct node* c = q.front();
    cout<<c->data<<" ";
    q.pop();
    if(c->left != NULL)
        q.push(c->left);
    if(c->right != NULL)
        q.push(c->right);
    }
}

int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout<<"Level order traversal of binary tree is \n";
    levelorder(root);
}
