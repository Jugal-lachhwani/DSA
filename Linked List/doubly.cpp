#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node* lptr;
    struct node* rptr;
};
struct node* r = NULL;
struct node* l = NULL;

void insertfront(int x)
{
    if(r == NULL)
    {
        r = (struct node*)malloc(sizeof(struct node));
        l = r;
        r->lptr = NULL;
        r->rptr = NULL;
        r->info = x;
        return;
    }
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->lptr = r;
    r->rptr = temp;
    temp->info = x;
    r = temp;
}

void insertlast(int x)
{
    if(r == NULL)
    {
        r = (struct node*)malloc(sizeof(struct node));
        l = r;
        r->lptr = NULL;
        r->rptr = NULL;
        r->info = x;
        return;
    }
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->rptr = l;
    l->lptr = temp;
    temp->info = x;
    l = temp;
}
void deletefront()
{
    struct node*temp = l;
    l = l->rptr;
    delete(temp);
}
void deleteback()
{
    struct node* temp = r;
    r = r->lptr;
    delete(temp);
}
void deleten(int n)
{
    if (n == 1)
    {
        deletefront();
        return;
    }
    struct node* trav = l->rptr;
    int i=2;
    while(i<n)
    {
        trav = trav->rptr;
        i++;
    }
    if(trav == r)
    {
        deleteback();
        return;
    }
    trav->lptr->rptr = trav->rptr;
    trav->rptr->lptr = trav->lptr;
    delete(trav);
}
void deletex(int x)
{
    struct node* trav = l;
    while(trav!= r && trav->info!= x)
        trav = trav->rptr;
    if(trav == r)
        return;
    trav->lptr->rptr = trav->rptr;
    trav->rptr->lptr = trav->lptr;
    delete(trav);
}
void display()
{
    struct node* trav = l;
    while(trav!= r)
    {
        cout<<trav->info<<" ";
        trav = trav->rptr;
    }
    cout<<trav->info;
}
void insertx(int x, int pos)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->info = x;
    temp->lptr = NULL;
    temp->rptr = NULL;
    struct node* trav = l;
    if(trav->info == pos)
    {
        l->lptr = temp;
        temp->rptr = temp;
        l= temp;
    }
    while(trav!= r && trav->info != pos)
    {
        trav = trav->rptr;
    }
    if(trav->info == pos)
    {
        trav->lptr->rptr = temp;
        temp->lptr = trav->lptr;
        temp->rptr = trav;
        trav->lptr = temp;
        return;
    }
    // if(trav == r)
    // {
        cout<<"Position not found"<<endl;
        return;
    // }
        // trav->lptr->rptr = temp;
        // temp->lptr = trav->lptr;
        // temp->rptr = trav;
        // trav->lptr = temp;
}
int main(){
        // struct node* first = (struct node*)malloc(sizeof(struct node));
        // r = first;
        // l = first;
        // first->lptr = NULL;
        // first->rptr = NULL;
        // first->info = 1;
        // insertfront(2);
        // insertfront(3);
        // insertlast(4);
        // display();
        // cout<<endl;
        // deltefront();
        // display();
        // cout<<endl;
        // insertfront(5);
        // insertfront(6);
        // deletex(5);
        // cout<<endl;
        // display();
        // cout<<endl;
        // insertx(7, 2);
        // display();
        insertfront(8);
        insertfront(9);
        insertfront(10);
        insertfront(11);
        deleten(4);
        display();
        return 0;

}
//Rotate a linkedlist
//Remove duplicate elements from sorted linkedlist
//detect Loop in linkedlist
//delete n nodes after m nodes from linkedlist