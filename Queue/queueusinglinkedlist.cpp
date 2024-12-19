#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* link;
};
struct node *head=NULL;
struct node *rear=NULL;
void queueue(int val ) {
struct node *newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = val ;
newNode->link = NULL;
if(head == NULL && rear == NULL)
head = rear = newNode ;
else
{
rear->link = newNode ;
rear =newNode ;
} }
int deleteque()
{
struct node *temp;
//if(head == NULL)
//printf("Queue is Empty");
//else
//{
cout<<head->data;
temp = head;
head = head->link;
//if(head == NULL)
//rear = NULL;
free(temp);
//}
}
int main()
{
    queueue(5);
    queueue(9);
    deleteque();
}
