#include <stdio.h>
int LinearSearch(int arr[],int size,int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element)
            return i;
    }
    return -1; // element not found in array
}
int main() {
    printf("Linear and Binary search algorithm \n");
    // Linear search algorithm using array traversal. O(n) time complexity. This algorithm work for sorted as well as unsorted arrays.
    int arr[]={4,5,2,7,8,9,3,14,10}; //
    int size = sizeof(arr)/sizeof(arr[0]); // Calculate size of array
    int element = 7;
    int result = LinearSearch(arr, size, element);
    if(result == -1){
        printf("%d is not present in array\n", element);
    }
    else{
        printf("%d is present at index %d\n", element, result);
    }
    // Binary search is algorithm like opening up a page in a book using page number. It will work only for sorted array. O(log(n)) time complexity
return 0;
}