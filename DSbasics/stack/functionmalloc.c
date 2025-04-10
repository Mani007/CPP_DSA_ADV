#include <stdio.h>
#include <stdlib.h>
// All this stack and queue are implemented using array
struct Node{
    int data;
    struct Node *next;
};
struct Queue {
    int size;
    struct Node *N;
    struct Node *bottom; // for tracking the queue operations
};
struct Stack {
    int size;
    struct Node *N;
    struct Node *top; // for tracking the top of the bucket something like stack
    
};
struct Stack * createStack(int size){

}
struct Queue * createQueue(int size){
    
}
void pushStack(struct Stack *s,int data){

}
void pushQueue(struct Queue *q,int data){

}
int popStack(struct Stack *s){

}
int popQueue(struct Queue *q){

}
int isEmptyStack(struct Stack *s){

}
int isEmptyQueue(struct Queue *q){

}
int isFullStack(struct Stack *s){

}
int isFullQueue(struct Queue *s){

}
int main() {
    printf("The Function for memory allocation and access \n");
return 0;
}