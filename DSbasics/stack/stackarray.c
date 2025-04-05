#include <stdio.h>
#include <stdlib.h>
struct Stack{
    int maxSize; // max size of stack
    int top; // index of top element
    int *arr; // array to store elements
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
        printf("Stack Overflow\n");
        return;
    }
    sptr->arr[++sptr->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(struct Stack *sptr){
    if (isEmpty(sptr)){
        printf("Stack Underflow\n");
        return -1;
    }
    return sptr->arr[sptr->top--];
}
int main() {
    printf("Stack using Array\n");
    // struct Stack s;
    // s.maxSize = 10;
    // s.top = -1;
    // s.arr = (int*)malloc(s.maxSize * sizeof(int));// allocate memory for given size of array
    //  push operation
    // s.arr[++s.top] = 10;
    // s.arr[++s.top] = 20;
    // s.arr[++s.top] = 30;
    //  pop operation
    // printf("Popped element is %d\n", s.arr[s.top--]);
    // printf("Popped element is %d\n", s.arr[s.top--]);
    // free(s.arr); // free memory allocated for array
    //struct Stack *s;
    //s->maxSize = 15;
    //s->top = -1;
    //s->arr = (int*)malloc(s->maxSize * sizeof(int)); // allocate memory for given size of array
    // s->arr[++s->top] = 10;
    // s->arr[++s->top] = 20;
    // s->arr[++s->top] = 30;
    // printf("Popped element is %d\n", s->arr[s->top--]);
    // printf("Popped element is %d\n", s->arr[s->top--]);
    // free(s);
    // check if stack is empty 
    struct Stack s;
    s.maxSize = 5;
    s.top = -1;
    s.arr = (int*)malloc(s.maxSize * sizeof(int)); // allocate memory for given size of array
    if (isEmpty(&s)){
        printf("Stack is totally empty");
    }
    
     
return 0;
}