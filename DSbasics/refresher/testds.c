#include <stdio.h>
// Function needed for the array are push, pop, isFull, isEmpty
void push(int a[], int top, int val, int last){
    if (top<last){
        a[top] = val;
        top = top + 1;
    } else {
        printf("The Stack is full");
    }
}
int main() {
    printf("Testing skill for DS - Stack and queue. \n");
    printf("Implement stack using array. \n");
    int top = 0;
    int last = 5;
    int arr[]= {0,0,0,0,0};
    push(arr,top,10,last);
    printf("Top is %d \n", top);
    printf("last is %d \n", last);
    printf("Element added is %d \n", arr[top]);
return 0;
}