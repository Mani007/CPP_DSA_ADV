#include <stdio.h>
// Function needed for the array are push, pop, isFull, isEmpty
// pass by value function look like void push(void), void pop(void) etc. 
// pass by reference 
void push(int *a[], int *top, int val, int *last){
    if (*(top)<=*(last)){
        a[*(top)] = val;
        top = top+1;
    } else {
        printf("The Stack is full");
    }
}
int main() {
    printf("Testing skill for DS - Stack and queue. \n");
    printf("Implement stack using array. \n");
    int last = 5;
    int *l = &last;
    int top = 0;
    int *t = &top;
    int* arr[5];
    push(arr,t,20,l);
    push(arr,t,30,l);
    printf("Value at index 0 is %d \n", *arr);
    printf("Value at index 1 is %d \n", *arr+1);

return 0;
}