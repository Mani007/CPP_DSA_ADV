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
int countChar(char *exp){
    //variable used to access the subsequent array elements.
    int offset = 0;
    //variable that counts the number of elements in your array
    int count = 0;

    //While loop that tests whether the end of the array has been reached
    while (*(exp + offset) != '\0')
    {
        //increment the count variable
        ++count;
        //advance to the next element of the array
        ++offset;
    }
    //return the size of the array
    return count;
}
int parenthesisMatch(char *exp){
    // Algo
    //get the length and loop over each char //check for opening and closing bracket // push and pop it into stack accordingly // check if stack is empty // return 1 if empty and 0 if not.
    struct Node *sptr = createStack(25); 
    for (int i=0;i<countChar(exp);i++){
        if (*(exp+i) == "("){
            sptr = pushNode(sptr,*(exp+i));
        } 
        else if (*(exp+i) == ")")
        {
            sptr = popNode(sptr);
        }
    }
    if (isEmpty(sptr) == 1){
        printf("Parenthesis Matched \n");
        return 1;
    } else {
        printf("Does not match  \n");
        return 0;
    }
}
int main() {
    printf("Parenthesis matching \n");
    char *cp = "2+(3+6))";
    printf("Char count %d \n",countChar(cp)); // This is working
    //int m = parenthesisMatch(cp);
    // struct Node *C=createStack(10);
    // C = pushNode(C,'a');
    // C = pushNode(C,'b');
    // C = pushNode(C,'c');
    // C = popNode(C);
    // displayStack(C);
    // Now we are good to go for parenthesis matching
return 0;
}