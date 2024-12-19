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
//int i=0;
// void arraytotree(node* temp,int n,int a[])
// {
//     if(temp == NULL)
//         return;
//     if(2*i + 1 < n)
//     {
//         temp->left = new node(a[2*i+1]);
//     }
//     else{
//         return;
//     }
//     if(2*i + 2 <n)
//     {
//         temp->right = new node(a[2*i+2]);
//     }
//     else{
//         return;
//     }
//     i++;
//     arraytotree(temp->left, n, a);
//     arraytotree(temp->right, n, a);
// }
void preorder(node* temp)
{
    if(temp == NULL)
        return;
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void levelorder(struct node* root)
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
void queuetotree(struct node* temp,int a[],int n)
{
    queue<node*> q;
    int i=0;
    q.push(temp);
    while(!q.empty()){
    node* c = q.front();
    q.pop();
    if(i+1 < n)
    {
        c->left = new node(a[++i]);
        q.push(c->left);
    }
    if(i+1 < n)
    {
        c->right = new node(a[++i]);
        q.push(c->right);
    }
    }
    return;
}
int main()
{
    int a[] = {0,1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    node* root = new node(a[0]);
    
    queuetotree(root,a,n);

    levelorder(root);

}