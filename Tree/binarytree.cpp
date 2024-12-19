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

// Pre-order traversal
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

// Post-order traversal
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

// Recursive function to insert a node in the binary tree
bool insertNode(struct node* root, int value)
{
    // If the left child is NULL, insert the new node here
    if (root->left == NULL) {
        root->left = new node(value);
        return true;
    }
    // If the right child is NULL, insert the new node here
    else if (root->right == NULL) {
        root->right = new node(value);
        return true;
    }

    // Try inserting into the left subtree first
    bool inserted = insertNode(root->left, value);

    // If the node wasn't inserted in the left subtree, try the right subtree
    if (!inserted) {
        inserted = insertNode(root->right, value);
    }

    return inserted;
}
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
node* insertleft(node* one,int x)
{
    if(one == NULL)
        return new node(x);
    else {
        one->left = insertleft(one->left,x);
    }
    return one;
}
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

    // Insert new nodes
    insertleft(one, 30);
    //Inserting at left
    insertleft(one, 40);
    //Deleting right
    deleteright(one);

    // Perform traversals
    cout << "Pre-order traversal: ";
    preorder(one);
    cout << endl;

    cout << "In-order traversal: ";
    inorder(one);
    cout << endl;

    cout << "Post-order traversal: ";
    postorder(one);
    cout << endl;

    cout << "Level-order traversal: ";
    levelorder(one);
    cout << endl;


    return 0;
}
