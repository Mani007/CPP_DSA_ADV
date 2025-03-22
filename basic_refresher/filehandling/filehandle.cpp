// This required understanding of OOP
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
/*
Useful class in fstream for file handling in C++ are 
1. fstreambase class
2. ifstream (input file stream) ---derived from fstream base class
3. ofstream (output file stream) ---derived from fstream base class
4.fstream (file input/output stream)
*/
/*
We can open a file using two methods
1. using the constructor
2. using the member function open() 
*/
int main() {
    cout << "File handling in C++" << endl;
    string s=" Some random code... ";
    ofstream outfile("sample.txt"); // for write operation
    outfile<<s<<endl;
return 0;
}