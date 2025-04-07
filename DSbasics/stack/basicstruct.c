#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main() {
    printf("Dealing with struct and pointer\n");
    printf("--------------Basic linking------------------\n");
    struct Node l1;
    struct Node l2;
    struct Node l3;
    l1.data = 10;
    l1.next = &l2;
    l2.data = 20;
    l2.next = &l3;
    l3.data = 30;
    l3.next = NULL;
    printf("First element: %d\n", l1.data);
    printf("Address of l1: %p\n", &l1);
    printf("Address POINTED by l1: %p\n", l1.next);
    printf("Second element: %d\n", l2.data);
    printf("Address of l2: %p\n", &l2);
    printf("Address POINTED by l2: %p\n", l2.next);
    printf("Third element: %d\n", l3.data);
    printf("Address of l3: %p\n", &l3);
    printf("Address POINTED by l3: %p\n", l3.next);
return 0;
}