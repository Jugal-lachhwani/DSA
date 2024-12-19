#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void InsertAtLast(struct Node **head)
{
    struct Node *lastNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data\n");
    scanf("%d", &lastNode->data);
    lastNode->next = NULL;
    struct Node *ptr = *head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = lastNode;
    printf("Data Inserted Successfully...\n");
}

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

int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 56;
    head->next = second;
    second->data = 78;
    second->next = third;
    third->data = 90;
    third->next = fourth;
    fourth->data = 45;
    fourth->next = fifth;
    fifth->data = 34;
    fifth->next = NULL;
    traversal(head);
    InsertAtLast(&head);
    traversal(head);


    return 0;
} 