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
void postorder(struct node* one)
{
    if(one == NULL)
        return;
    else{
        postorder(one->left);
        postorder(one->right);
        cout << one->data << " ";
    }
}
int main()
{
    // Create the root node
    struct node* one = new node(5);
    one->left = new node(10);
    one->right = new node(15);
    one->left->right = new node(19);
    one->left->left = new node(8);
    one->right->left = new node(9);
    one->right->right = new node(12);

    // Perform postorder traversal
    cout << "Post-order traversal: ";
    postorder(one);
    return 0;


}