#include <stdio.h>
typedef struct Node{
    int data;
    int size;
    struct Node *next;
    struct Node *prev;
} sNode;
// creation of LL is done
sNode* createLL(int length){
    sNode *sll = (sNode *)malloc(length * sizeof(sNode));
    sll->size = length;
    sll->next = NULL;
    sll->prev = NULL;
    return sll;
}
void addNode(sNode *org, int val){
    if(org->next == NULL  ){
        if(org->prev == NULL){
            printf("Adding the first node \n");
            org->data = val;
            org->next = org+1;
        } else {
            printf(" the last node - stack full\n");
        }
    } else {
        printf("Adding node \n");
        org->data = val;
        org->next = org+1;
    }
}
int main() {
    printf("Implementing the linked list. \n");
  
    
return 0;
}