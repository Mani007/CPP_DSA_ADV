#include <stdio.h>
#include <stdlib.h>
void printArray(int* a,int n){
    for (int i=0;i < n;i++){
        printf("The element of array at index %d is %d \n",i,a[i]);
    }
}


int main() {
    int a[] = {12,3,9,2,4,7};
    int n=6;
    printArray(a,n); // before sort
    bubbleSort(a,n);
    printArray(a,n); // after sort
return 0;
}