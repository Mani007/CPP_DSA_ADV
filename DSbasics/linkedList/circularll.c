#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void cll_traversal(struct Node *head){ // traversal of circular LL
    struct Node *current = head;
    do{
        printf(" %d ", current->data);
        current = current->next;
    }while(current!=head);
    printf("\n");
}
int main() {
    printf("Circular linked list");
    struct Node *first,*second,*third, *last;
    // Once you allocated the memory, its important to delete it if not in use anymore using free function
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));
    // Inserting data in first node and linking it to the next
    first->data = 11;
    first->next = second;
    // Inserting data in second node and linking it to the next/second node
    second->data = 20;
    second->next = third;
    // Inserting data in third node and linking it to the next/third node
    third->data = 30;
    third->next = last;
    // Making last point to the last node in the list and linking it to the NULL for termination
    last->data = 10; // No segmentation error here now
    last->next = first; // last will always point to first in the list
    cll_traversal(first);
return 0;
}