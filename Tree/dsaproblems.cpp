#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *link;
};

struct node* head = NULL;

int insertfront()
{
    int n;
     cout << "Enter the data you want to add at front: ";
    cin >> n;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->link=head;
    head=temp;
}
int insertend() {
    int n;
    cout << "Enter the data you want to add at end: ";
    cin >> n;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->link = NULL;
    if(head == NULL) {
        head = temp;
    } else {
        struct node* trav = head;
        while(trav->link != NULL) {
            trav = trav->link;
        }
        trav->link = temp;
    }
    return 0;
}
int display() {
    struct node* p = head;
    while(p != NULL) {
        cout << p->data << " ";
        p = p->link;
    }
    return 0;
}
// Problrm 1
// void rotate()
// {
//     struct node* trav = head;
//     while(trav->link != NULL) {
//         trav = trav->link;
//     }
//     struct node* t = head;
//     head = head->link;
//     trav->link = t;
//     t->link = NULL;
// }
void deleteduplicate(struct node* trav)
{
    if(trav->link->link != NULL){
    struct node* temp = trav->link;
    trav->link = trav->link->link;
    free(temp);}

}
int main()
{
    insertend();
    insertend();
    insertend();
    insertend();
    insertend();
    insertend();

    //Problem 2

    //struct node *trav = head;

    // while(trav->link->link != NULL )
    // {
    //     if(trav->data == trav->link->data)
    //     {
    //         deleteduplicate(trav);
    //     }
    //     trav = trav->link;
    // }
    // if (trav->data == trav->link->data)
    // {
    //     struct node *n = trav->link;
    //     trav->link = NULL;
    //     free(n);
    // }
    // display();

    // struct node *trav = head;
    // int i=1;
    // while(trav->link->link != NULL )
    // {
    //     cout<<"loop started"<<endl;
    //     if(trav->data + 1 == trav->link->data)
    //     {
    //         cout<<"loop detected at "<<i<<endl;
    //     }
    //     trav = trav->link;
    //     i++;
    // }
    // if (trav->data == trav->link->data)
    // {
    //     cout<<"loop detected at "<<i<<endl;
    // }
    // display();
    struct node *trav = head;
    int m,n;
    cout<<"Enter m and n : "<<endl;
    cin>>m>>n;
    while(trav->link->link != NULL )
    {
        int i = m,j = n;
        while(i-- > 1 && trav->link != NULL)
        {
            trav = trav->link;
        }
        while(j-- > 0 && trav->link != NULL)
        {
            deleteduplicate(trav);
            trav = trav->link;
        }

    }
    // if (trav->data == trav->link->data)
    // {
    //     cout<<"loop detected at "<<i<<endl;
    // }
    display();
}
