#include <stdio.h>
#include <stdlib.h>
// void insertdata(int arr[], int index, int data, int length){
//     //int len = sizeof(arr)/sizeof(arr[0]);
//     int len = length;
//     if (index < len){
        
//         arr[index] = data;
//         printf("Data inserted successfully!! at index %d with data %d \n", index, data);
//     }
    
// }
// void displayarr(int arr[], int length){
//     int i = 0;
//     for(i=0;i<length;i++){
//         printf("Element in index %d of array are %d \n",i,arr[i]);
//     }
// }
typedef struct Data{
    int d;
    struct data *next; // for storing address of next node
} data;
void insert(data *p,int index, int val, int last){
    // check if the pointer is not the last node
    if (index<last){
        (p+index)->d = val;
        (p+index)->next = (p+index+1);
    } else {
        printf("The list is full \n");
    }
}
void read(data *p, int index, int last){
    if (index<last){
        printf("The value at index %d is %d \n", index, (p+index)->d);
    } else {
        printf("The display value does not exists \n");
    }
}
void readAll(data *p, int last){
    int i=0;
    if(last != 0){
        for(i = 0; i<last; i++){
            printf("The data at index %d is %d \n", i, (p+i)->d);
        }
    } else {
        printf("The index out of range. \n");
    }
}

void pushstack(data *p, int index,  int val, int last){
    // check if the pointer is not the last node
    if (index<last){
        (p+index)->d = val;
        (p+index)->next = (p+index+1);
    } else {
        printf("The list is full \n");
    }
}
void popstack(data *p, int index, int last){
    // Implement it later 
    TODO: Later implementation
}
int main() {

    printf("Testing the programming skills\n");
    printf("Implementing dynamic list and pointer and function in C\n");
    data *d1 = (data *)malloc(5 * sizeof(data *)); // list of 5 structs
    int *top = &d1[0];
    insert(d1,0,10,5);
    insert(d1,1,20,5);
    insert(d1,2,30,5);
    insert(d1,3,40,5);
    readAll(d1,5);
    // manually inserting and reading each value
    // d1->d = 10;
    // (d1+1)->d = 20;
    // (d1->next) = (d1+1);
    // printf("Value of d is %d at address is %p \n", d1->d,d1);
    // printf("Value of d is %d at address is %p \n", d1->d,(d1+1));
    // printf("Value of d is %d at address is %p \n", (d1+1)->d,(d1+1));

    //data *ptr = malloc(sizeof(data));
    
return 0;
}