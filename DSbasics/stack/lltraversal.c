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

};


int main() {
    printf("Understding Linked List traversal in dynamic data \n");
    
return 0;
}