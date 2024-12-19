#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *link;
};

struct node* head = NULL;

struct node* reverse()
{
    struct node* current = head;
    struct node* prev = NULL;
    struct node* newnode = NULL;
    while(current != NULL)
    {
        newnode = current->link;
        current->link = prev;
        prev = current;
        current = newnode;
    }
    head = prev;
    return head;
}


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

int insertatposbefore()
{
    int n,pos;
    cout<<"Enter the data u want to enter and enter the position before which u want :";
    cin>>n>>pos;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=n;
    struct node *trav=head;
    if(head->data==pos)
    {
            temp->link=head;
            head=temp;
    }
    while(trav->link!=NULL)
    {
        if(trav->link->data==pos)
        {
        temp->link=trav->link;
        trav->link=temp;
        return 0;
        }
        else
            trav=trav->link;

    }
}
void DeleteNodeAtEnd()
{
    struct node *p=head;
    while(p->link->link!=NULL)
    {
        p=p->link;
    }
    p->link=NULL;
    free(p->link);


}
int deletefront()
{
     struct node *p=head;
     head=head->link;
     free(p);
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
deletenth()
{
    cout<<"Enter the value you want to delete from linked list "<<endl;
    int val;
    cin>>val;
     struct node* trav=head;
    if(head->data==val)
    {
        struct node*temp=head;
        head=head->link;
        free(temp);
    }

    else
        while(trav->link->data!=val)
        {
            trav=trav->link;
        }
        struct node* temp=trav->link;
        trav->link=trav->link->link;
        free(temp);
}

int main() {
    insertend();
    insertend();
    insertend();
    insertend();
    insertend();
    insertatposbefore();
    display();
    cout<<endl;
    deletenth();
    display();
    cout<<endl;
    //reverse();
    //display();
    return 0;
}
