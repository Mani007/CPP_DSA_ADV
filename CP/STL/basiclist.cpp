#include <iostream>
#include <list>
using namespace std;
// Linked list are non contiguous block of memory 
template <class T>
void displaylist(list<T> &lst){
    cout<<"display started here"<<endl;
    list<T> :: iterator it ;
    for (it=lst.begin(); it != lst.end(); it++){
        cout <<"The value of  " <<" is "<< *it << " "<<endl;
    }
    cout<<"display ended here"<<endl;
    // lst.clear(); // To delete all elements in the list.
}
int main() {
    cout << "Basic list - linked list in C++" << endl;
    list<int> l1;
    list<char> l2;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l2.push_back('a');
    l2.push_back('b');
    l2.push_back('c');
    // list<int>::iterator it1 = l1.begin();
    // list<char>::iterator it2 = l2.begin();
    // while(it1!=l1.end() && it2!=l2.end()) {
    //     cout <<"Form l1: "<< *it1 << " and " <<"from l2: "<< *it2 << endl;
    //     it1++;
    //     it2++;
    // }
    displaylist(l1);
    //displaylist(l2);
return 0;
}