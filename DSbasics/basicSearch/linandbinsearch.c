#include <stdio.h>
int LinearSearch(int arr[],int size,int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element)
            return i;
    }
    return -1; // element not found in array
}
int BinarySearch(int arr[],int size,int element){ // Binary search only work with sorted array
    int mid,low,high;
    low = 0;
    high = size - 1;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == element)
            return mid;
        else if(arr[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
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
        printf("In linear search %d is present at index %d\n", element, result);
    }
    // Binary search is algorithm like opening up a page in a book using page number. It will work only for sorted array. O(log(n)) time complexity
    printf("Binary search starts here \n");
    int arr1[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    size = sizeof(arr1)/sizeof(arr1[0]);
    element = 12;
    result = BinarySearch(arr1, size, element);
    if(result == -1){
        printf("%d is not present in array\n", element);
    }
    else{
        printf("In binary search %d is present at index %d\n", element, result);
    }
return 0;
}