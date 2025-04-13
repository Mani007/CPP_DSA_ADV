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
int pop(struct Node **top){
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
    int element = pop(&top);
    printf("The returned element is %d \n", element);
    Display(top);
return 0;
}