#include <stdio.h>
#include <stdlib.h>
// Refer lladvance.c file
// A simple linked list with base node as null 
// each node we add to the LL, we store the next node next address to just a node back to it. 
// We will traverse the node from the top node and till our next node will become NULL
struct Node {
    int data;
    struct Node *next;
};
struct Node * createBaseNode(void){
    struct Node *N = (struct Node *)malloc(sizeof(struct Node));
    return N;
}
struct Node * push(struct Node *n,int data){
    struct Node *N = (struct Node *)malloc(sizeof(struct Node));
    N->data = data;
    N->next = n;
    return N;
}
struct Node * pop(struct Node *n){
    // Draw on paper to understand the main operation of pop
    if (n->next != NULL){
        struct Node *p;
        p = n->next; // storing the value of previous node in p
        free(n);
        return p;
    } else {
        printf("This is all the last node. \n");
        return n;
    }
}
void displayNodes(struct Node *n){
    if (n->next != NULL){
        struct Node *p;
        p = n;
        while (p->next != NULL){
            printf("The data of the node is %d \n",p->data);
            p = n->next;
        }
    } else {
        printf("This linked list is empty.  \n");
    }
}
int main() {
    printf("Understding Linked List traversal in dynamic data \n");
    struct Node *nn = createBaseNode();
    nn = push(nn,10);
    nn = push(nn,20);
    displayNodes(nn);
return 0;
}