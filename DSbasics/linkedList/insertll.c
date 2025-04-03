#include <stdio.h>
#include <stdlib.h>
// Insert element in LL cases
//1. Insert element at the beginning - changing the head node pointer value O(1)
//2. Insert element at the end - changing the tail node pointer value  O(n)
//3. Insert element in the middle - changing the mid node value O(n)
//4. Insert element after the node - changing the given node pointer value O(1)
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
struct Node* insertfirst(struct Node *head,int data){ 
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = head;
    head = newnode; // replacing the head node memory address to the newnode memory address
    return head;
 }
 struct Node* insertindex(struct Node *head,int data,int index){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head; // link list traversal pointer
    int i=0;
    while(p ->next!=NULL && i<index-1){ // traversal of linked list
        p = p->next;
        i++;
    }
    // use diagram to visualize and understand better. 
    newnode->next = p->next; // new link is been establish here
    newnode->data = data; // assigning the data to the new node
    p->next = newnode; // new new connection is been completed
    return head; // returning the head/first node to the main function

 }
 struct Node* insertend(struct Node *head,int data){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head; // link list traversal pointer
    int i=0;
    while(p->next!=NULL){ // Be careful with pointer, use pointer in dry run to visualize better 
        p = p->next;
        i++;
    }
    // use diagram to visualize and understand better. 
    newnode->next = p->next; // new link is been establish here
    newnode->data = data; // assigning the data to the new node
    p->next = newnode; // new new connection is been completed
    return head; // returning the head/first node to the main function

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
    // Traversal of linkedlist nodes
    first = insertfirst(first,55); // Inserting element in the begining of the list
    first = insertindex(first,88,4); // Inserting element in the middle of the list 
    first = insertend(first,66); // Inserting element in the end of the list
    lltraversal(first);
    printf("All the elements of the linked list as been printed \n");
    // Deleting the memory allocated for the nodes

return 0;
}