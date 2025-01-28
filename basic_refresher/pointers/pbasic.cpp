 #include <iostream>
using namespace std;
int main() {
  int var1 = 43;
  int *ptr;
  ptr = &var1;
  cout<<"value of var1 is " << var1<<endl;
  cout<<"address of var1 is " << &var1<<endl;
  cout<<"address in pointer ptr is " << ptr<<endl;
  cout<<"address OF pointer ptr is " << &ptr<<endl;
  cout<<"value in pointer ptr is " << *ptr<<endl;
  return 0;
}