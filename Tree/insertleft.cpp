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
node* insertleft(node* one,int x)
{
    if(one == NULL)
        return new node(x);
    else {
        one->left = insertleft(one->left,x);
    }
    return one;
}
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
    int n;
    node* one = new node(5);
    one->left = new node(10);
    one->right = new node(15);
    cout<<"Enter the element you want to add at left: ";
    cin>>n;
    one = insertleft(one,n);
    cout<<"Enter the element you want to add at left: ";
    cin>>n;
    one = insertleft(one,n);
    inorder(one);

}