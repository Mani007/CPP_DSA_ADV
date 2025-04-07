#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    int size;
    struct Node* next;
};
struct Node* createLL(int size){
    // Create a linked list of given size
    struct Node* head = (struct Node*)malloc(size * sizeof(struct Node));
    head->next = NULL;
    return head;
}
// Use diagram,flowchart or pen-paper to visualize and solve this function 
struct Node* addNode(struct Node *head,int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = head;
    newNode->data = data;
    head->next = newNode;
    newNode->next =NULL;
    return head;    
}

void printList(struct Node *node){
    while(node->next != NULL){
        printf(" %d \n ", node->data);
        node = node->next;
    }
    printf("\n");
}
int main() {
    printf("Advance link list concepts");
    int size=5;
    struct Node* head = createLL(size);
    head = addNode(head, 10);
    head = addNode(head, 20);
    head = addNode(head, 30);
    printList(head);
return 0;
}