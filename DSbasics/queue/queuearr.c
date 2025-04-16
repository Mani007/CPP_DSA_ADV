#include <stdio.h>
#include <stdlib.h>
// Queue can be implemented using arrays,linked list,other ADT such as stacks or hash maps. 
struct Queue {
    int size;
    int front;
    int last;
    int *arr;
};
struct Queue * createQueue(int size){
    struct Queue *qq = (struct Queue *)malloc(sizeof(struct Queue));
    qq->size = size;
    qq->front = -1;
    qq->last = -1;
    qq->arr = (int *)malloc(size*sizeof(int));
    qq->front+=1;
    return qq;
}
int qEmpty(struct Queue *qq){
    if (qq->front == -1 && qq->last == -1){
        printf("The queue is Empty. \n");
        return 1;
    }else {
        return 0;
    }
}
int qFull(struct Queue *qq){
    if (qq->front == qq->size-1){
        printf("Queue is completely full. \n");
        return 1;
    } else {
        return 0;
    }
}
struct Queue * qpush(struct Queue *qq,int data){
    // check if FULL and create the node for LL implementation 
    //for arrays just use the qq pointer
    if (qFull(qq)==1){
        printf("The queue is packed. \n");
        return qq;
    } else {
        //(qq->arr)+1 = data; // This syntax is for linked list
        qq->last+=1;
        qq->arr[qq->last] = data;
        return qq;
    }
}
struct Queue * qpop(struct Queue *qq){
    if (qEmpty(qq)==1){
        printf("Queue is Empty. \n");
        return qq;
    } else {
        qq->last -=1;
        return qq;
    }
}
void display(struct Queue *qq){
    if (qEmpty(qq)==1){
        printf("Queue is Empty. \n");
    } else {
        for (int i = qq->front;i<=qq->last;i++){
            printf("The data in index %d is %d \n",i,qq->arr[qq->last-i]);
        }
    }
}
int main() {
    printf("Queue data structure using ARRAY \n");
    // initiating the queue structure
    struct Queue *q = createQueue(7);
    q = qpush(q,25); 
    q = qpush(q,45); 
    q = qpush(q,55); 
    q = qpush(q,65);
    q= qpop(q);
    q= qpop(q);
    display(q); 
    
return 0;
}