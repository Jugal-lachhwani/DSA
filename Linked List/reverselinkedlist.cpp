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

    head = reverse(head);

    printf("\nReversed Linked List:\n");
    traversal(head);

    return 0;
}
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
// class Solution:
//     def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
//         h = head
//         for i in range(left-1):
//             head = head.next
//         lhead = head
//         for i in range(right-left):
//             head = head.next
//         rhead = head
//         if lhead = rhead:
//             return h
//         prev = rhead.next
//         curr = lhead
//         while curr:
//             next = current.next
//             curr.next = prev
//             prev = curr
//             curr = next
//         head = h
//         if left == 1:
//             return h
//         else:
//             for i in range(left-2):
//                 head = head.next
//             head.next = curr
//             return h


        
        