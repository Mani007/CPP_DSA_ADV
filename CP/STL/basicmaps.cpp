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
    // print elements in map
    cout << "John's marks: " << marks["John"] << endl;
    cout << "Alice's marks: " << marks["Alice"] << endl;
    // update marks
    marks["Bob"] = 90;
    // print updated marks
    cout << "Bob's updated marks: " << marks["Bob"] << endl;
    // delete an element
    marks.erase("Charlie");
    // check if an element exists
    if (marks.find("Charlie") == marks.end())
        cout << "Charlie does not exist in the map." << endl;
    // print all elements in map
    cout << "All marks:" << endl;
    for (auto it = marks.begin(); it != marks.end(); ++it)
        cout << it->first << " - " << it->second << endl;
    
return 0;
}