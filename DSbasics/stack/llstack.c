#include <stdio.h>
#include <stdlib.h>
// All this stack and queue are implemented using array
struct Node{
    int data;
    struct Node *next;
};
struct Stack {
    int size;
    int track;
    struct Node *N;
    struct Node *top; // for tracking the top of the bucket something like stack
    
};
int isStackFull(struct Stack *sptr){
    if (sptr->track==sptr->size){
        return 0;
    } else {
        return 1;
    }
}
struct Stack * createStack(int size){
    struct Stack *sptr = (struct Stack *)malloc(sizeof(struct Stack));
    sptr->size = size;
    sptr->N = (struct Node *)malloc((sptr->size)*sizeof(struct Node));
    sptr->track = 0;
    sptr->top = sptr->N;
    return sptr;

}
struct Stack * pushStack(struct Stack *sptr,int data){
    if(isStackFull(sptr) == 0){
        printf("Stack is full, pop some items. \n");
        return sptr;
    } else {
        sptr->N->data = data;
        sptr->N->next = sptr->N+1;
        sptr->top = sptr->N+1;
        sptr->track += 1;
        return sptr;        
    }
}
int main(){
    printf("The simle stack using link list. \n");
    return 0;
}