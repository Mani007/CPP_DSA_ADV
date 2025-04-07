#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* nextNode;
};

struct StackNode {
    struct Node* top;
    int size;
    struct StackNode* nextStackNode;
};
struct StackNode* createStackNode(int size){
    struct StackNode* newNode = (struct StackNode*) malloc(sizeof(struct StackNode));
    newNode->top = NULL;
    newNode->size = size;
    newNode->nextStackNode = NULL;
    return newNode;
}

void push(struct StackNode* stackNode, int data) {
    struct stackNode* newNode = (struct stackNode*) malloc(sizeof(struct stackNode));
    newNode->data = data;
}
int main() {
    printf("Stack using Linked list");

return 0;
}