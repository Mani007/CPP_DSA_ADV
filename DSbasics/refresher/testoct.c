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
    struct data *p1;
    p1 = &d1;
    p1->index = 1;
    p1->d = 10;
    struct data d2;
    struct data *p2;
    p2 = &d2;
    p2->index = 2;
    p2->d = 20;
    printf("Using pointer Index of d1 is %d and data is %d \n",p1->index,p1->d);
    printf("Using pointer Index of d2 is %d and data is %d \n",p2->index,p2->d);
return 0;
}