#include <stdio.h>
#include <stdlib.h>
// Refer lladvance.c file
// The most important part is debugging and proper code inspections including memory layouts 
// A simple linked list with base node as null 
// each node we add to the LL, we store the next node next address to just a node back to it. 
// We will traverse the node from the top node and till our next node will become NULL
struct Node {
    int data;
    struct Node *next;
    struct Node *start;

};
struct Node * createNode(void){
    struct Node *N = (struct Node *)malloc(sizeof(struct Node));
    N->start = N;
    return N;
}
//the start pointer is losing its value when we wre pushing the new node - we need different algo [Debugger result]
struct Node * pushData(struct Node *n,int data){
    struct Node *N = (struct Node *)malloc(sizeof(struct Node));
    N->next = NULL;
    n->data = data;
    n->next = N;
    N->start = n->start;
    //N->start = n;
    return N;
}
// Lets implement the pop operations
struct Node * popData(struct Node *n){
    // We can pop in queue FIFO way
    struct Node *p,*q; 
    p = n->start; // We got the first node
    q = n->next; // We got the next node here
    q->start = p->next; // moving the pointer to next node 
    return q;
}


void display(struct Node *n){
    struct Node *p,*q;
    p = n->start; // first node value 
    //q = n->next;
    while(p->next != NULL){
        printf("Data %d \n",p->data);
        //q = n->next;
        p = p->next;  // fixed for pointer iteration 
    }
}


int main() {
    printf("Understding Linked List traversal in dynamic data \n");
    struct Node *nn = createNode();
    nn = pushData(nn,25);
    //printf("The data is %d \n",nn->data);
    nn = pushData(nn,52);
    nn = pushData(nn,61);
    nn = popData(nn);
    //printf("The data is %d \n",nn->data);
    display(nn);
return 0;
}