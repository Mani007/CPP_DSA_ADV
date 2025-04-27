#include <stdio.h>
#include <stdlib.h>
struct cqueue {
    int data;
    int size;
    int track;
    struct cqueue *top;
    struct cqueue *first;
};
int isEmpty(struct cqueue *cq){
    if (cq->top == NULL){
        printf("Cqueue is empty. \n");
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct cqueue *cq){
    if (cq->first == cq->top && cq->size == cq->track){
        printf("The Cqueue is full \n");
        return 1;
    } else {
        return 0;
    }
}
// trackcount function is used for making circular queue by adjusting cq->track from the start
void trackcount(struct cqueue *cq){
    cq->track = 0;
    while (cq->top !=NULL){
        cq->track +=1;
    }
}
struct cqueue * createcqueue(int size){
    struct cqueue *cq = (struct cqueue *)malloc(sizeof(struct cqueue));  // This is just a single node as it is not an array
    cq->size = size;
    cq->first = cq;
    cq->top = NULL;
    cq->track = 0;
    return cq;
} 
struct cqueue * pushcqueue(struct cqueue *cq,int data){
    if (isFull(cq) == 1){
        printf("The cqueue is FULL, pop first \n");
        return cq;
    } else {
        struct cqueue *newnode = (struct cqueue *)malloc(sizeof(struct cqueue) );
        cq->data = data;
        newnode->first = cq->first;
        newnode->size = cq->size;
        cq->top = newnode;
        newnode->track +=1;
        return newnode; 
    }
}
void display(struct cqueue *cq){
    
        struct cqueue *p;
        p = cq->first;
        while (p->top !=NULL)
        {
            printf("Data is %d \n",p->data);
            p = p->top;
        }
}

struct cqueue * popqueue(struct cqueue *cq){  // Use visualization to write the functions
    struct cqueue *first = cq->first; // first node of cqueue
    struct cqueue *nextnode = first->top; // getting the next node
    cq->first = nextnode; // changing the first pointer to nextnode
    cq->track -=1; // setting up track count to decrement
    free(first); // free the memory space of first
    return cq;
}
int main() {
    printf("Implementing Circular queue \n");
    struct cqueue *c = createcqueue(5);
    c = pushcqueue(c,10);
    c = pushcqueue(c,20);
    c = pushcqueue(c,30);
    c = pushcqueue(c,50);
    c = popqueue(c);
    c = popqueue(c);
    c= pushcqueue(c,12);
    c= pushcqueue(c,15);
    display(c);
return 0;
}