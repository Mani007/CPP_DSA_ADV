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

int main() {

    printf("Testing the programming skills\n");
    printf("Implementing dynamic list and pointer in C\n");
    data *d1 = (data*)malloc(sizeof(data)); 
    d1->d = 20;
    data *d2 = (data*)malloc(sizeof(data));
    d1->next = &d2; //storing address of d2 inside d1
    printf("the data in d1 is %d \n", d1->d);
    printf("the address of d1 is %p \n", &d1);
    printf("the address of d2 is %p \n", &d2);
    printf("the address of d2 STORED in d1 is %p \n", d1->next);

    //data *ptr = malloc(sizeof(data));
    
return 0;
}