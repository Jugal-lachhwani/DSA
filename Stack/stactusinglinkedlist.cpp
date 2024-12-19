#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* link;
};
struct node *head=NULL;
int push()
{
    int n;
    cin>>n;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->link=head;
    head=temp;
}
int pop()
{
    int d;
    struct node *temp;
    d=head->data;
    temp=head;
    head=head->link;
    free(temp);
    cout<<d;
}
int main()
{
   push();
   push();
   push();
   pop();
   cout<<endl;
   pop();
}
