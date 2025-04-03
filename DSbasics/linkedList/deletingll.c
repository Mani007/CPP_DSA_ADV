#include <stdio.h>
#include <stdlib.h>
// Insert element in LL cases
//1. Deleting element at the beginning - changing the head node pointer value O(1)
//2. Deleting element at the end - changing the tail node pointer value  O(n)
//3. Deleting element in the middle - changing the mid node value O(n)
//4. Deleting element with a given value - changing the given node pointer value O(n)
struct Node{
    int data;
    struct Node* next;
};
void lltraversal(struct Node *ptr){  // Time complexity is O(n) here
    int i=0;
    while(ptr!=NULL){
        printf("Data at %d node is  %d \n",i, ptr->data);
        i++;
        ptr = ptr->next;
    }
    printf("\n");
}
struct Node* delfirst(struct Node *head){
    struct Node *ptr = head; // storing the head value
    head = head->next; // moving the head to the next node
    free(ptr); // freeing the memory of the node that was previously the head
    return head; // returning the new head of the list
 }
 struct Node* delindex(struct Node *head,int index){
    struct Node *p = head;
    struct Node *q = head->next; // q is one pointer ahead of p pointer
    int i=0;
    for (int i; i<index-1; i++){ // traversal of LL nodes
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next; // updating the link of the previous node to skip the node to be deleted
    free(q); // freeing the memory of the node that was previously the head
    return head; // returning the new head of the list
 }
 struct Node* delvalue(struct Node *head,int value){
    struct Node *p = head;
 }
 struct Node* dellast(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL; // making the last node's next pointer NULL
    free(q); // freeing the memory of the node that was previously the last node
    return head; // returning the new head of the list
 }
int main() {
    printf("Linked list insertion\n");
    printf("Creating all the pointers for all the list \n ");
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
    last->next = NULL; // last will always point to NULL in the list
    printf("printing LL before deletion\n"); //
    lltraversal(first);
    //first = delfirst(first);
    //first = delindex(first,2); // this will delete the node with value 30
    first = dellast(first);
    printf("printing LL after deletion\n"); //
    lltraversal(first);
 
    return 0;
}