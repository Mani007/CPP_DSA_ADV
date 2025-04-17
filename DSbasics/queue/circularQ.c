#include <stdio.h>
#include <stdlib.h>
struct cqueue {
    int data;
    int size;
    int track;
    struct cqueue *top;
    struct cqueue *first;
};

struct cqueue * createcqueue(int size){
    struct cqueue *cq = (struct cquque *)malloc(size*sizeof(struct cqueue));
    cq->size = size;
    cq->first = cq;
    cq->top = NULL;
    cq->track = 0;
    return cq;
}
int main() {
    printf("Implementing Circular queue \n");
return 0;
}