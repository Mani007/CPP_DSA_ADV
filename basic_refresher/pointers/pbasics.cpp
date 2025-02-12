#include <iostream>
#include <iomanip>
using namespace std;
void vptr(void* data, char datatype);
int main() {
   // void pointer use case. malloc function generally returns a void pointer in C. In C++ it is often the new function for object creation
   int i1=25;
   float f1 = 10.2;
   char c1 = 'a';
   vptr(&i1,'i');
   vptr(&f1,'f');
   vptr(&c1,'c'); 
return 0;
}

void vptr(void* data, char datatype){
    if (datatype == 'i'){
        cout<< "integer i data type is "<< *(int*)data<< endl;
    }
    if (datatype == 'f'){
        cout<< "float f data type is "<< *(float*)data<< endl;
    }
    if (datatype == 'c'){
        cout<< "char c data type is "<< *(char*)data<< endl;
    }
}