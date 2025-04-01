#include <iostream>
#include <string>
#include <map>
using namespace std;
// map in c++ is an associative array similar to dictionary
int main() {
cout << "Maps STL in C++" << endl;
    map<string,int> marks;
    // insert elements in map
    marks["John"] = 85;
    marks["Alice"] = 92;
    marks["Bob"] = 78;
    marks["Charlie"] = 88;
    marks["David"] = 95;
    map<string,int> :: iterator iter; // iterator of map type
    // print all key-value pairs in map
    for (iter=marks.begin(); iter!=marks.end();iter++){
        cout << "Name: " << iter->first << ", Marks: " << iter->second << endl; // first is the name variable in map objectand second is marks variable in map
        cout << "Name: " << (*iter).first << ", Marks: " << (*iter).second << endl; //Pointer deref and typecasting first is the name variable in map objectand second is marks variable in map
    }
    
return 0;
}