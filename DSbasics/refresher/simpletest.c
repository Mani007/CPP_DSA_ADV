#include <stdio.h>
int main() {
    printf("Testing idea of \n");
    printf("Array \n");
    int *arr[] = {2,4,6,8};
    printf("Element at index 0 is %d \n", *arr);
    printf("Element at index 1 is %d \n", *(arr+1));
    *(arr+4) = 10;
    printf("Element at index 5 is %d \n", *(arr+4));

return 0;
}