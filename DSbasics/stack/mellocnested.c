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
    printf("Simple nested struct using malloc \n");
    struct Bucket *bp = (struct Bucket *)malloc(sizeof(struct Bucket));
    bp->size = 20;
    bp->N = (struct Node *) malloc(sizeof(struct Node));
    bp->N->data = 210;
    printf("The first bucket element size is %d \n",bp->size);
    printf("The data element in bucket Node is %d \n",bp->N->data);

return 0;
}