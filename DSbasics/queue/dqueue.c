// Double ended Queue a.k.a dqueue
#include <stdio.h>
#include <stdlib.h>
struct dqueue {
    int data;
    int size;
    int rtrack;
    int ltrack;
    struct dqueue *right;
    struct dqueue *left;
    
};
int isEmpty(struct dqueue *dq){
    if ((dq->rtrack+dq->ltrack) == 0){
        printf("The DQueue is empty. \n");
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct dqueue *dq){
    if ((dq->rtrack+dq->ltrack) == dq->size){
        printf("The Dqueue is FULL. \n");
        return 1;
    } else {
        return 0;
    }
}

struct dqueue * createdqueue(int size){
    struct dqueue *dq = (struct dqueue *)malloc(sizeof(struct dqueue));
    dq->size = size;
    dq->ltrack = 0;
    dq->rtrack = 0;
    dq->right = dq;
    dq->left = dq;
    
    return dq;
}

struct dqueue * pushright(struct dqueue *dq,int data){
    struct dqueue *newnode = (struct dqueue *)malloc(sizeof(struct dqueue));
    dq->data = data;
    newnode->right = dq->right;
    newnode->left = dq->left;
    
    return newnode;
}
struct dqueue * pushleft(struct dqueue *dq,int data){}
struct dqueue * popright(struct dqueue *dq){}
struct dqueue * popleft(struct dqueue *dq){}
void displayright(struct dqueue *dq){}
void displayleft(struct dqueue *dq){}
int main() {
    printf("Implementation of double ended Queue \n");
return 0;
}