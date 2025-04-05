#include <stdio.h>
#include <stdlib.h>
struct Stack{
    int maxSize; // max size of stack
    int top; // index of top element
    int array[]; // array to store elements
    // int *arr; // self referential pointer to the total size and can be accessed using index
};
int isEmpty(struct Stack *sptr){
    if (sptr->top == -1){
        return 1; // stack is empty
    } else {
        return 0; // stack is not empty
    }
}

int isFull(struct Stack *sptr){
    if (sptr->top == sptr->maxSize - 1){
        return 1; // stack is full
    } else {
        return 0; // stack is not full
    }
}

void push(struct Stack *sptr, int item){
    if (isFull(sptr)){
        printf("Stack Overflow -PUSH failed\n");
        return;
    }else{
        sptr->top=sptr->top+1; // increment the top pointer
        sptr->arr[sptr->top] = item; // insert the item at top position and increment the top pointer by 1
        printf("%d pushed to stack\n", item);
    }
}

int pop(struct Stack *sptr){
    int item=0;
    if (isEmpty(sptr)){
        printf("Stack Underflow\n");
        return -1;
    } else{
        item = sptr->arr[sptr->top]; // store the top element
        sptr->top--; // decrement the top pointer
        return item; // return the popped element
    }
    
}

struct Stack * createStack(int size){
    struct Stack s;
    s.maxSize = size;
    s.top = -1;
    s.arr = (int*)malloc(s.maxSize * sizeof(int)); // allocate memory for given size of array
    struct Stack *sptr;
    sptr = &s;
    return sptr;
}
int main() {
    printf("Stack using Array\n");
    struct Stack *sp; // pointer sp of stack
    sp = createStack(5);
    // printf("Stack pointer inside Stack is %p\n",sp->arr);
    // printf("Stack pointer inside Stack is %p\n",sp->arr[0]);
    // printf("Stack pointer inside Stack is %p\n",sp->arr[1]);
    // printf("Stack pointer inside Stack is %p\n",sp->arr[sp->maxSize - 5]);
    push(sp,20);
    push(sp,30);
    // push(sp,40);
    // printf("Top element is %d\n", pop(sp));
    // printf("Next element is %d\n", pop(sp));
    // printf("Next element is %d\n", pop(sp));
    // printf("Next element is %d\n", pop(sp));
    // printf("Next element is %d\n", pop(sp));
     
return 0;
}