# Stacks 
LIFO - Last in first out.   
Application of stack   
1. Function calls  
2. Infix and postfix calls   
3. Parenthesis matching     

### Abstract Data type of Stack   
Stack can be implemented mainly using array or linked list. The important data types and function of stack are pointer to the topmost element and related data element of any type.   
1. push(&stackptr)
2. pop(&stackptr)  
3. isEmpty(&stackptr) and isFull(&stackptr)
4. peak(&stackptr) return index of peak element    
## Implementing stack using array   
```
int arr[20]; array of size 20
int *stackptr = &arr; //using pointer
// or 
int stackptr = -1; //using indexing
```   
or by using dynamic array. check the code example.