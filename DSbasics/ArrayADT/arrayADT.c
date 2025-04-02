#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;  // self referential pointer to the total size and can be accessed using index
};
void creatArray(struct myArray *arrayptr, int tsize, int usize){
    arrayptr->total_size = tsize;
    arrayptr->used_size = usize;
    arrayptr->ptr = (int*) malloc(tsize * sizeof(int)); // total required size of the array is allocated and address of the first element is written as int pointer
    if(arrayptr->ptr == NULL){
        printf("Memory error!\n");
        exit(0);
    }
    printf("Memory allocated successfully\n");
    return;
}
void showarray(struct myArray *arrayptr){
    int i;
    printf("Array elements are: ");
    for(i=0; i<arrayptr->used_size; i++){
        printf("%d ", arrayptr->ptr[i]);
    }
    printf("\n");
    return;
}
void setarray(struct myArray *arrayptr){
    int i;
    printf("Enter %d integers: ", arrayptr->used_size);
    for(i=0; i<arrayptr->used_size; i++){
        scanf("%d", &arrayptr->ptr[i]);  // scanf require address of the pointer
    }
    return;
}
int main() {
    struct myArray marks;
    printf("Creating and initializing an array\n");
    creatArray(&marks,5,4);
    printf("Entering values for the array\n");
    setarray(&marks);
    printf("Displaying the array\n");
    showarray(&marks);
return 0;
}