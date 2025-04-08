#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Bucket{
    int size;
    struct Node *N;
};
int main() {
    printf("Nested struct and array using pointer \n");
    printf("Simple nested struct array of size 5 using malloc \n");
    struct Bucket *bp = (struct Bucket *)malloc(sizeof(struct Bucket));
    bp->size = 20;
    bp->N = (struct Node *) malloc(5*sizeof(struct Node));
    bp->N->data = 209;
    (bp->N+1)->data = 210;
    (bp->N+2)->data = 211;
    (bp->N+3)->data = 212;
    (bp->N+4)->data = 213;
    printf("The first bucket element size is %d \n",bp->size);
    for (int i=0;i<5;i++){
        printf("The data element in bucket Node %d is %d \n",i,(bp->N+i)->data);
    }

return 0;
}