#include<iostream>
using namespace std;
struct node 
{
    int node;

}
struct node* head = 
void traversal(struct Node *ptr)
{
    int i = 0;
    printf("_Linked List\n");
    while (ptr != NULL)
    {
        printf("Element %d: %d\n", i + 1, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

struct Node *reverse(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

void create(int a[],int size)
{
    struct node* newnode,temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp = (struct node*)malloc(sizeof(struct node));
    newnode->data=a[0];
    newnode->nextnewnode=NULL;
    head = newnode;
    temp = head;
    for (int i=0;i<size;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=a[i];
        newnode->nextnewnode=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}
int compare()
int main()
{


}