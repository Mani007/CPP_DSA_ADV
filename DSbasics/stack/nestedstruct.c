#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct nestedNode {
    int size;
    struct Node *in;
    struct Node N;
};
int main() {
    printf("Nested structure and pointers");
    struct nestedNode nest1;
    struct nestedNode *pnest1;
    pnest1 = &nest1;
    nest1.size = 5;
    struct Node snode1;  // This is a separate node other than base struct
    struct Node *pnode11,*pnode1;
    //pnode1=&snode1; 
    pnode11=&snode1;
    pnest1->in = pnode11;
    pnest1->in->data = 155;
    pnest1->in->next = NULL;
    // nest1.N = snode1;
    // nest1.N.data = 150;
    printf("The Main and subnode data USING POINTER are \n");
    printf("The Main node size is %d \n",pnest1->size);
    printf("The Main node refer internode data is %d \n",pnest1->in->data);
    // struct nestedNode nest2;
    // nest2.size = 7;
    // struct Node snode2;
    // struct Node *pnode2;
    // struct nestedNode nest3;
    // nest3.size = 7;
    // struct Node snode3;
    // struct Node *pnode3;
    // nest2.N = snode2;
    // nest2.N.data = 110;
    // nest3.N = snode3;
    // nest3.N.data = 140;
    // printf("First big node \n");
    // printf("First big node size %d \n",nest1.size);
    // printf("First big node sub node data %d \n",nest1.N.data);
    // printf("First big node sub node data %d \n",nest1.N.data);
    // printf("First big node sub node address %p \n",nest1.N);
    // printf("First big node sub node next address %p \n",nest1.N.next);

return 0;
}