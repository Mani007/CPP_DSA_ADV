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
int isStackempty(struct Stack *sptr){
    if (sptr->track==0){
        return 1;
    } else {
        return 0;
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
void displayStack(struct Stack *sptr){
    if (isStackempty(sptr) ==0){
        for (int i=0;i<sptr->track;i++){
            printf("The data at the index %d is %d \n",i,(sptr->N+i)->data);
        }
        return;
    } else {
        printf("The stack is empty. \n");
        return;
    }
}
int main(){
    printf("The simple stack using link list. \n");
    struct Stack *s = createStack(5);
    s = pushStack(s,30);
    s = pushStack(s,60);
    displayStack(s);

    return 0;
}