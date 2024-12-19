#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAtFront(struct Node **head)
{
    struct Node *nextNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data to be inserted: ");
    scanf("%d", &nextNode->data);
    nextNode->next = *head;
    *head = nextNode;
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
    insertAtFront(&head);
    traversal(head);

    return 0;
}
