#include <stdio.h>
#include <stdlib.h>
struct Queue {
    int qdata;
    int size;
    int track;
    struct Queue *top;
    struct Queue *first;
};
int isEmpty(struct Queue *q){
    if (q->first == q->top){
        printf("Queue is empty. \n");
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct Queue *q){
    if (q->size <= q->track){
        printf("The stack is full \n");
        return 1;
    } else {
        return 0;
    }
}
struct Queue * createQueue(int size){
    struct Queue *qq = (struct Queue *)malloc(size*sizeof(struct Queue));
    qq->first = qq;
    qq->track = 0;
    qq->top = NULL;
    qq->size = size;
    
    return qq;
}
struct Queue * qpushll(struct Queue *qq,int data){
    if(isFull(qq)==1){
        printf("Full - cannot push  \n");
        return qq;
    } else {
        // new node 
        struct Queue *qnew = (struct Queue *)malloc(sizeof(struct Queue));
        qnew->qdata = data;
        qnew->top = qq;
        qnew->first = qq->first;
        qnew->size = qq->size;
        qnew->track +=1;
        return qnew;

    }
}
struct Queue * qpopll(struct Queue *q){
    if(isEmpty(q)==1){
        printf("Queue is already empty. \n");
        return q;
    } else {
        struct Queue *p =q; // original pointer
        q= q->top;  // use Address and pen-paper diagram to visualize the pointers increment and decrement operations. 
        q->track -=1;
        free(p);
        return q;
    }
}
void display(struct Queue *q){
    if (isEmpty(q) ==1){
        printf("Queue is empty. \n");
    } else {
        // struct Queue *p =q; // original pointer 
        while(q->top != NULL){  // q->top is the value of next pointer
            printf("The queue data is %d \n", q->qdata);
            q = q->top ;  // Very important step, use pen-paper and visualize correctly
        }
    }
}
int main() {
    printf("Implementing Queue using Linked List\n");
    struct Queue *qnode = createQueue(5);
    qnode = qpushll(qnode,10);
    qnode = qpushll(qnode,20);
    qnode = qpushll(qnode,30);
    // qnode = qpushll(qnode,40);
    // qnode = qpushll(qnode,50);
    qnode = qpushll(qnode,60);
    qnode = qpopll(qnode);
    qnode = qpopll(qnode);
    display(qnode);
return 0;
}