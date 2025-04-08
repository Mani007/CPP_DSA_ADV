#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct nestedNode {
    int size;
    struct Node *in;
    struct Node N;
};
int main() {
    printf("Nested structure and pointers");
    struct nestedNode *nn = (struct nestedNode *) malloc(sizeof(struct nestedNode));
    nn->size = 5;
    struct Node n;
    nn->N = n;
    nn->in = (struct Node *) malloc(sizeof(struct Node));
    nn->in->data = 100;
    printf("Data is \n", nn->in->data); // this is segmentation error as we only have pointer not the instance of struct
   
return 0;
}