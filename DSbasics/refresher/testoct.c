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
struct Data{
    int d;
    struct data *next; // for storing address of next node
} data;

int main() {

    printf("Testing the programming skills\n");
    printf("Implementing dynamic list and pointer in C\n");
    struct Data *ptr = malloc(sizeof(data));
    
return 0;
}