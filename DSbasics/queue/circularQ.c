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
    if (cq->first == cq->top){
        printf("The Cqueue is full \n");
        return 1;
    } else {
        return 0;
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
int main() {
    printf("Implementing Circular queue \n");
    struct cqueue *c = createcqueue(5);
    c = pushcqueue(c,10);
    c = pushcqueue(c,20);
    c = pushcqueue(c,30);
    display(c);
return 0;
}