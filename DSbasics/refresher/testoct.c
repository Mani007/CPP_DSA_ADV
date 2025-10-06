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
struct data{
    int index;
    int d;
};

int main() {

    printf("Testing the programming skills\n");
    printf("Implementing Structure and pointer in C\n");
    struct data d1;
    struct data d2;
    d1.index = 1;
    d2.index = 2;
    d1.d = 10;
    d2.d = 20;
    printf("Index of d1 is %d and data is %d \n",d1.index,d1.d);
    printf("Index of d2 is %d and data is %d \n",d2.index,d2.d);
return 0;
}