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
void rightview(node* root)
{
    if(root == NULL)
        return;

    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size(); // Number of nodes at the current level

        // Traverse all nodes of the current level
        for(int i = 1; i <= n; i++)
        {
            node* temp = q.front();
            q.pop();

            // If this is the last node of the current level, print it
            if(i == n)
                cout << temp->data << " ";

            // Add left node to the queue
            if(temp->left != NULL)
                q.push(temp->left);

            // Add right node to the queue
            if(temp->right != NULL)
                q.push(temp->right);
        }
    }
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(7);
    root->right->left = new node(6);
    root->right->right = new node(5);
    cout << "Right view of the binary tree is: "; 
    rightview(root);
}