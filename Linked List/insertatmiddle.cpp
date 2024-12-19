#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    int i = 0;
    printf(" Linked List\n");
    while (ptr != NULL)
    {

        printf("Element %d: %d\n", i + 1, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

void InsertAtPosition(struct Node **head)
{
    struct Node *posNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    int pos, i = 0;
    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("Enter the data: ");
    scanf("%d", &posNode->data);
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    if (pos == 1)
    {
        posNode->next = *head;
    }
    else
    {
        struct Node *ptr = *head;
        while (ptr->next != NULL)
        {
            if (i == pos - 2)
            {
                posNode->next = ptr->next;
            }
            ptr = ptr->next;
            i++;
        }
    }
    printf("Data Inserted Successfully...\n");
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
    InsertAtPosition(&head);
    traversal(head);

    return 0;
}
