#include <stdio.h>
#include <stdlib.h>
// All this stack and queue are implemented using array
struct Node{
    int data;
    struct Node *next;
};
struct Queue {
    int size;
    int track;
    struct Node *N;
    struct Node *bottom; // for tracking the queue operations
};
struct Stack {
    int size;
    int track;
    struct Node *N;
    struct Node *top; // for tracking the top of the bucket something like stack
    
};
struct Stack * createStack(int size){
    struct Stack *sptr = (struct Stack *)malloc(sizeof(struct Stack));
    sptr->N = (struct Node *)malloc(size *sizeof(struct Node));
    sptr->top = sptr->N;
    sptr->track = 0;
    return sptr;
}
int isEmptyStack(struct Stack *sptr){
    if (sptr->track == 0){
        return 1;
    } else {
        return 0;
    }
}
int isEmptyQueue(struct Queue *qptr){

}
int isFullStack(struct Stack *sptr){
    if (sptr->track == sptr->size){
        return 1;
    } else {
        return 0;
    }

}
int isFullQueue(struct Queue *s){
void displayStack(struct Stack *sptr){
    if (sptr->track == 0){
    printf("Stack is empty \n");    
    } else {
        for (int i=0;i<sptr->track;i++){
            printf("The element of stack at %d is %d \n",(sptr->size)-i,((sptr->top)+i)->data);
        }
    }
    
}
struct Queue * createQueue(int size){
    
}
void pushStack(struct Stack *sptr,int data){
    // check if stack is FULL
    if (isFullStack(sptr)){
        printf("The stack is full and we need to pop first. \n");
        //return sptr;
    } else {

        // Set data 
        sptr->top->data = data;
        // increment the top pointer
        sptr->top = (sptr->top)+1;
        sptr->track = (sptr->track)+1;
        //return sptr;
    }

}
void pushQueue(struct Queue *qptr,int data){

}
void popStack(struct Stack *sptr){
    // check if stack is empty
// Pop the item anf free the memory 
}
int popQueue(struct Queue *qptr){

}


}
int main() {
    printf("The Function for memory allocation and access \n");
    struct Stack *s = createStack(5);
return 0;
}