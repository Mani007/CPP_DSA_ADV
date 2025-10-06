#include <stdio.h>
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
int main() {

    // insertdata(arr1, 0, 10, 5);
    // insertdata(arr1, 1, 20, 5);
    // insertdata(arr1, 2, 30, 5);
    // insertdata(arr1, 3, 40, 5);
    // insertdata(arr1, 4, 50, 5);
    // displayarr(arr1,5);
    // putting elements in array
    // arr[1] = 10;
    // arr[2] = 20;
    // arr[3] = 30;
    // arr[4] = 40;
    // arr[5] = 50;
    // display element in array
    // int i =0;
    // for(i=0;i<=5;i++){
    //     printf("Element in index %d of array are %d \n",i,arr[i]);
    // }
    printf("Testing the programming skills\n");
    printf("Implementing array and pointer in C\n");
    int arr1[5]; // integer array of size 5
    int *ptr = &arr1[0];
    *ptr = 10;
    *(ptr+1) = 20;
    *(ptr+2) = 30;
    *(ptr+3) = 40;
    *(ptr+4) = 50;
    int i;
    for(i = 0; i<5; i++){

        printf("Element in index %d  at address %p of array are %d \n",i,(ptr+i),*(ptr + i));
    }

return 0;
}