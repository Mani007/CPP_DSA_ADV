// Double ended Queue a.k.a dqueue
#include <stdio.h>
#include <stdlib.h>
struct dqueue {
    int data;
    int size;
    int track;
    struct dqueue *front;
    struct dqueue *back;
    struct dqueue *next;
};
int isEmpty(struct dqueue *dq){
    if (dq->track == 0){
        printf("The DQueue is empty. \n");
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct dqueue *dq){}
struct dqueue * createdqueue(int size){
    struct dqueue *newnode = (struct dqueue *)malloc(sizeof(struct dqueue));
    newnode->size = size;
    newnode->front = newnode;
    newnode->back = NULL;
    newnode->next = NULL;
    newnode->track = 0;
    return newnode;
}
struct dqueue * pushfront(struct dqueue *dq,int data){

}
struct dqueue * pushback(struct dqueue *dq,int data){}
struct dqueue * popfront(struct dqueue *dq){}
struct dqueue * popback(struct dqueue *dq){}
void display(struct dqueue *dq){}
int main() {
    printf("Implementation of double ended Queue \n");
return 0;
}