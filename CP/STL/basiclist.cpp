#include <iostream>
#include <list>
using namespace std;
// Linked list are non contiguous block of memory 
//template <class T>
void displaylistint(list<int> &lst){
    cout<<"display started here"<<endl;
    list<int> :: iterator it ;
    for (it=lst.begin(); it != lst.end(); it++){
        cout <<"The value of  " <<" is "<< *it << " "<<endl;
    }
    cout<<"display ended here"<<endl;
    // lst.clear(); // To delete all elements in the list.
}
void displaylistchar(list<char> &lst){
    cout<<"display started here"<<endl;
    list<char> :: iterator it ;
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
    list<int> :: iterator iter1 = l1.end();
    //list<int> :: iterator iter2 = l1.back(); 
    iter1++;
    l1.insert(iter1, 40);
    displaylistint(l1);
    displaylistchar(l2);
return 0;
}