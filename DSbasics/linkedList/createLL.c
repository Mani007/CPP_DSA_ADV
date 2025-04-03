#include <stdio.h>
#include <stdlib.h>  // for use of malloc and free
struct Node{
    int data;
    struct Node *next;
};
void lltraversal(struct Node *ptr){
    int i=0;
    while(ptr!=NULL){
        printf("Data at %d node is  %d \n",i, ptr->data);
        i++;
        ptr = ptr->next;
    }
    printf("\n");
}
int main() {
    printf("Lined List creationand traversal\n");
    printf("Creating all the pointers for all the list \n ");
    struct Node *first,*second,*third, *last;
    // Once you allocated the memory, its important to delete it if not in use anymore using free function
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
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
    last->data = 10; // Segmentation fault as we have not allocated memory for it
    last->next = NULL; // last will always point to NULL in the list
    // Traversal of linkedlist nodes
    lltraversal(first);
    printf("All the elements of the linked list as been printed \n");
    // Deleting the memory allocated for the nodes

return 0;
}