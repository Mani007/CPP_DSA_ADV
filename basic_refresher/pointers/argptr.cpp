// argc - argument counter 
// argv - argument vector 
#include <iostream>
using namespace std;
int main(int argc, char **argv) {
cout << "argc and argv" << endl;

cout << "Number of command line arguments: " << argc << endl;
for (int i = 0; i < argc; i++) {
    cout << "argv[" << i << "]: " << argv[i] << endl;
}
return 0;
}
// use this in th command line to see the output of the program 
// ./argptr.exe hi hello 