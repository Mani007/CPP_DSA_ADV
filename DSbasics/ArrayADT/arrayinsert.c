#include <stdio.h>
#define CAPACITY 10
// There can be many possible variation of this type of problem in DSA
void display(int arr[],int n){   // Array traversal function
    // Traversal 
    for(int i=0; i<n; i++){
        printf("Value at %d is %d  ",i, arr[i]);
    }
    printf("\n");
    return;
}
// This insertion function will insert a value at a given index and update the array size by shifting the elements to the right position 
int insertin(int arr[],int *ptrsize,int element,int index,int capacity){
    if (*ptrsize>=capacity){
        return -1;
    } else {
        // reverse loop
        for (int i=*ptrsize-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        *ptrsize = *ptrsize+1; // do not use ptrsize++ as it will only update pointer and does not increase the size variable, instead use deref properly
        printf("Item inserted successfully \n");
        return 1;
    }
}
int main() {
    printf("Array insertion operation \n");
    int size=6,element=25,index=3;
    int arr[CAPACITY]={2,4,5,6,7,1};
    // Array traversal function
    display(arr,size);
    insertin(arr,&size,element,index,CAPACITY);
    display(arr,size);
return 0;
}