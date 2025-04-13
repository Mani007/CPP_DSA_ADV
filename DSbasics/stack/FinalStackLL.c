#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
int isEmpty(struct Node *top){
    if(top->next == NULL){
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct Node *top){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if(p == NULL){
        return 1;
    } else {
        return 0;
    }
}
struct Node * push(struct Node *top,int data){
    if (isFull(top) == 1){
        printf("Stack is Full \n");
        return top;
    } else {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = top;
        top = newNode;
        return top;
    }
}
int pop(struct Node **top){ // We are using double pointer here 
    // Please prefer arrow operator more than double pointers
    if (isEmpty(*top)==1){
        printf("Stack is empty");
        return 0;
    } else {
        struct Node *n =*top; // storing the original pointer
        *top = (*top)->next; // decrementing the pointer
        int x = n->data;
        free(n);
        return x;

    }
}
int peek(struct Node *top,int pos){
    struct Node *ptr = top;
    for (int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr = ptr->next;
    }
    if (ptr!= NULL){
        return ptr->data;
    } else {
        return -1;
    }
}
void Display(struct Node *top){
    while(top != NULL){
        printf("The data is %d \n", top->data);
        top = top->next;
    }
}
int main() {
    printf("Stack using Linked List \n");
    struct Node *top = NULL;
    top = push(top,55);
    top = push(top,65);
    top = push(top,75);
    top = push(top,95);
    top = push(top,105);
    int element = pop(&top);
    printf("The returned element is %d \n", element);
    for (int i=1;i<4;i++){
        int p = peek(top,i);
        printf("The peek value is %d \n",p);
    }
    Display(top);
return 0;
}