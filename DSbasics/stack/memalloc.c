#include <stdio.h>
#include <stdlib.h>
struct S{
    int data1;
    int data2;
};
int main() {
    printf("Understanding Memory alllocation,pointers and different methods \n");
    printf("Very basic method \n");
    struct S s1;
    s1.data1=12;
    s1.data2=15;
    printf("The value from struct S instance s1 data1 %d \n",s1.data1);
    printf("The value from struct S instance s1 data2 %d \n",s1.data2);

return 0;
}