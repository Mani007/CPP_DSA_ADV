#include <stdio.h>
#include <stdlib.h>
struct Stack{
    int maxSize; // max size of stack
    int top; // index of top element
    int *arr; // array to store elements
    // int *arr; // self referential pointer to the total size and can be accessed using index
};
int isEmpty(struct Stack *sptr){
    if (sptr->top == -1 || sptr->top < -1 ){
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
int peak(struct Stack *sptr,int pos){
    if (isEmpty(sptr) || sptr->top-pos+1<0){
        printf("Invalid position\n");
        return -1;
    } else {
        return sptr->arr[sptr->top-pos+1];
    }
}
int stackTop(struct Stack *sptr){
    if (isEmpty(sptr)){
        printf("Stack is empty\n");
        return -1;
    } else {
        return sptr->arr[sptr->top];
    }
}

int stackSize(struct Stack *sptr){
    return sptr->top+1;
}

int stackCapacity(struct Stack *sptr){
    return sptr->maxSize;
}

void display(struct Stack *sptr){
    if (isEmpty(sptr)){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are: ");
    for (int i=sptr->top; i>=0; i--){
        printf("%d ", sptr->arr[i]);
    }
    printf("\n");
}
int stackBottom(struct Stack *sptr){
    if (isEmpty(sptr)){
        printf("Stack is empty\n");
        return -1;
    } else {
        return sptr->arr[0];
    }
}
struct Stack * createStack(int size){
    struct Stack *s = (struct Stack*)malloc(sizeof(struct Stack));
    s->maxSize = size;
    s->top = -1;
    s->arr = (int*)malloc(s->maxSize * sizeof(int)); // allocate memory for given size of array
    return s;
}
int main() {
    printf("Stack using Array\n");
    // struct Stack *s = (struct Stack*)malloc(sizeof(struct Stack));
    // s->maxSize = 5;
    // s->top = -1;
    // s->arr = (int*)malloc(s->maxSize * sizeof(int)); // allocate memory for given size of array
    struct Stack *s = createStack(5);
    push(s,25);
    push(s,45);
    push(s,55);
    push(s,65);
    printf("The poped value is %d \n",pop(s));
    printf("The poped value is %d \n",pop(s));
    printf("The peak value at position 2 is %d \n",peak(s,2));
   
    
return 0;
}