#include <stdio.h>
#include <stdlib.h>
// Queue can be implemented using arrays,linked list,other ADT such as stacks or hash maps. 
struct Queue {
    int size;
    int front;
    int last;
    int *arr;
};
int main() {
    printf("Queue data structure using ARRAY \n");
    // initiating the queue structure
    struct Queue *qq = (struct Queue *)malloc(sizeof(struct Queue));
    qq->size = 10;
    qq->front = -1;
    qq->last = -1;
    qq->arr = (int *)malloc(qq->size*sizeof(int));
    // adding value in queue
    qq->arr[0] = 25;
    qq->front +=1;
    qq->last +=1;
    // second value 
    qq->arr[1] = 45;
    //qq->front +=1;
    qq->last +=1;
    // third element 
    qq->arr[2] = 55;
    //qq->front +=1;
    qq->last +=1;
    // print all the element from the queue 
    for (int i=0;i<=qq->last;i++){
        printf("The value of element at %d is %d \n",i,qq->arr[i]);
    }
return 0;
}