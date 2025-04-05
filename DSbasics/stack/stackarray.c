#include <stdio.h>
#include <stdlib.h>
struct Stack{
    int maxSize; // max size of stack
    int top; // index of top element
    int *arr; // array to store elements
};
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
    struct Stack *s;
    s->maxSize = 15;
    s->top = -1;
    s->arr = (int*)malloc(s->maxSize * sizeof(int)); // allocate memory for given size of array
    s->arr[++s->top] = 10;
    s->arr[++s->top] = 20;
    s->arr[++s->top] = 30;
    printf("Popped element is %d\n", s->arr[s->top--]);
    printf("Popped element is %d\n", s->arr[s->top--]);
    free(s);
    
     
return 0;
}