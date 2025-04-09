#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Bucket {
    int size;
    struct Node *N;
    struct Node *top; // for tracking the top of the bucket something like stack/queue
};
int main() {
    printf("Big nested structs \n");
    struct Bucket *b = (struct Bucket *) malloc(sizeof(struct Bucket)); // b is pointer to the bucket
    b->size = 5;
    b->N = (struct Node *) malloc((b->size)*sizeof(struct Node)); // making array Node and point to first element 
    b->top = b->N; // making top pointer pointing to first element
    // Lets insert the elements in Bucket
    b->N->data = 212;
    b->N->next = b->N+1;
    // inserting next element
    (b->N+1)->data = 214;
    b->N->next = b->N+2;
    b->top = b->N+1;
    // inserting third element
    (b->N+2)->data = 216;
    b->N->next = b->N+3;
    b->top = b->N+2;
    //printf("Current value at top pointer is %d \n",b->top->data);
    printf("Current value at top pointer is %d \n",(b->top -1)->data);
    // lets do reverse traversal using top pointer
    // for (int i=0;i<3;i++){
    //     printf("The value from the top pinter is %d \n",b->top+i->data);
    // }
return 0;
}