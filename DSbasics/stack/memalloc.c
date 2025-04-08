#include <stdio.h>
#include <stdlib.h>
struct Sarr{
    int data1;
    
};
int main() {
    printf("Understanding Memory alllocation,pointers and different methods \n");
    printf("Array Using pointer and malloc \n");
    struct Sarr *sp1 = (struct Sarr *)malloc(5*sizeof(struct Sarr)); // Array with size 5 
    sp1->data1 =10;
    (sp1+1) ->data1 = 12;
    (sp1+2) ->data1 = 14;
    (sp1+3) ->data1 = 16;
    (sp1+4) ->data1 = 18;
    for (int i=0;i<5;i++){

        printf("The value of data1 using pointer from  array using malloc is %d \n",(sp1+i)->data1);
    }

    // printf("Very basic method \n");
    // struct S s1;
    // s1.data1=12;
    // s1.data2=15;
    // printf("The value from struct S instance s1 data1 %d \n",s1.data1);
    // printf("The value from struct S instance s1 data2 %d \n",s1.data2);

return 0;
}