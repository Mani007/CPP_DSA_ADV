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
    printf("Nested structure and pointers \n");
    struct nestedNode NN;
    struct Node n;
    //struct nestedNode *nn = (struct nestedNode *) malloc(sizeof(struct nestedNode));  // NOW this is segmentation error as we only have pointer not the instance of struct
    struct nestedNode *nn ;  // NOW this is segmentation error as we only have pointer not the instance of struct
    nn = &NN;
    nn->size = 5;
    nn->N = n;
    nn->in = &n;
    // nn->in = (struct Node *) malloc(sizeof(struct Node));
    //nn->in->data = 100;
    nn->in->data=200;
    printf("Data is \n", nn->in->data); // this is segmentation error as we only have pointer not the instance of struct
   
return 0;
}