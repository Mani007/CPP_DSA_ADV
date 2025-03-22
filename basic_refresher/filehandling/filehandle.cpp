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
    //string s=" Some random code... ";
    //string r;
    // opening files using constructor and writing on it.
    // ofstream outfile("sample.txt"); // for write operation
    // outfile<<s<<endl;
    // opening file using constructor and reading from it.
    //ifstream readfile("sample.txt");
    //readfile>>r;
    //cout<<r<<endl;
    //getline(readfile, r); // display one entire line from the file
    // getline(readfile, r);
    //cout<<r<<endl;
    // closing file
    // outfile.close();
    //readfile.close();
    // Writing user name inside a file
    // string name;
    // cout<<"Enter youm name \n"<<endl;
    // cin>>name;
    // ofstream outfile("sample.txt"); // for write operation
    // outfile<<name<<endl;
    // outfile.close(); // the connection stream is closed to this file
    // string content;
    // ifstream infile("sample.txt");
    // getline(infile,content);
    // cout<<content<<endl;
    // infile.close(); // the connection stream is closed to this file
    // Now file handling using object not the constructor
    ofstream myfile;
    myfile.open("sample.txt");
    if (myfile.is_open()) {
        myfile << "1. Sample text to be written in the file.\n";
        myfile << "2. Sample text to be written in the file.\n";
        myfile << "3. Sample text to be written in the file.\n";
        myfile.close();
    } else cout << "Unable to open file";
     
return 0;
}