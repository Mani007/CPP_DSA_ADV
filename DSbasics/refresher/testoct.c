#include <stdio.h>
int main() {
    printf("Testing the programming skills");
    printf("Implementing array in C");
    int arr[5]; // integer array of size 5
    // putting elements in array
    arr[1] = 10;
    arr[2] = 20;
    arr[3] = 30;
    arr[4] = 40;
    arr[5] = 50;
    // display element in array
    int i =0;
    for(i=0;i<=5;i++){
        printf("Element in index %d of array are %d \n",i,arr[i]);
    }


return 0;
}