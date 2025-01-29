 #include <iostream>
using namespace std;
int main() {
  int var1 = 43;
  int *ptr1;
  int **ptr2; // double pointer
  int ***ptr3; // triple pointer
  ptr1 = &var1;
  ptr2 = &ptr1;
  ptr3 = &ptr2;
  cout<<"value of var1 is " << var1<<endl;
  cout<<"address of var1 is " << &var1<<endl;
  cout<<"address in pointer ptr1 is " << ptr1<<endl;
  cout<<"address OF pointer ptr1 is " << &ptr1<<endl;
  cout<<"value in pointer ptr1 is " << *ptr1<<endl;
  cout<<"value in pointer ptr2 is " << **ptr2<<endl;
  cout<<"value in pointer ptr3 is " << ***ptr3<<endl;
  cout<<"size of var1 is " << sizeof(var1)<<" Bytes"<<endl;
  cout<<"size of ptr is " << sizeof(ptr1) << " Bytes"<<endl;


  return 0;
}