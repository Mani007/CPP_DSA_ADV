#include <stdio.h>
void display(int arr[],int n){   // Array traversal function
    for(int i=0; i<n; i++){
        printf("Value at %d is %d \n",i, arr[i]);
    }
    printf("\n");
    return;
}
int main() {
    printf("Array insertion operation \n");
    int arr[10]={2,4,5,6,7,1};
    // Array traversal function
    display(arr,5);
return 0;
}