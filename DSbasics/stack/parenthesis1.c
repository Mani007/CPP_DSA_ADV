#include <stdio.h>
#include <stdlib.h>
struct Node{
    char data;
    int size;
    int top;
    struct Node *next;
    //struct Node *top;
};

int isEmpty(struct Node *c){
    if (c->next == NULL){
        printf("Stack is empty\n");
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct Node *c){
    if (c->size == c->top ){
        printf("Stack is full \n");
        return 1;
    } else {
        return 0;
    }
}

struct Node * createStack(int size){
    struct Node *N = (struct Node *)malloc(size*sizeof(struct Node)); // array of nodes
    N->size = size;
    N->top = 0;
    N->next = NULL;
    return N;
}
struct Node *pushNode(struct Node *n,char data){
    if(isFull(n)==1){
        printf("Stack is already full. \n");
        return n;
    } else {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = n;
        newNode->size = n->size;
        newNode->top = n->top+1;
        return newNode;
    }
}
struct Node * popNode(struct Node *c){
    if (isEmpty(c)==1){
        printf("Stack is empty \n");
        return c;
    }else {
        struct Node *main = c; // storing the main node pointer
        struct Node *prev = c->next; // storing the next node pointer
        free(main);
        return prev;
    }
}
void displayStack(struct Node *c){
    while(c->next!=NULL){
        printf("The data in stack is %c \n",c->data);
        c = c->next; // Very important pointer decrementing condition 
    }
}
int parenthesisMatch(char *exp){

}
int main() {
    printf("Parenthesis matching \n");
    char *cp = "abcdef";
    printf("The char array is %c \n",*cp); // this will only print the first character of the array
    printf("The char array is %c \n",*(cp+1)); // this will only print the second character of the array
    // struct Node *C=createStack(10);
    // C = pushNode(C,'a');
    // C = pushNode(C,'b');
    // C = pushNode(C,'c');
    // C = popNode(C);
    // displayStack(C);
    // Now we are good to go for parenthesis matching
return 0;
}