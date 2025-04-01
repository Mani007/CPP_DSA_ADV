#include <iostream>
//#include <bits/stdc++.h>
#include <vector>
using namespace std;
template <class T> // creating function templates
void display(vector<T> &v){
    for(int i=0; i<v.size();i++){
        cout<<"Display function begin here "<<endl;
        cout << "Vector element at index "<<i <<" is "<< v[i] <<endl;
        cout << "********************END HERE*******************"<<endl;
    }
}
int main() {
    cout << "Basics of Vectors" << endl;
    vector<int> vi; // declaration of an empty vector of integers
    vector<char> vec2(4); // 4 element character vector
    vec2.push_back('a');
    vec2.push_back('b');
    vec2.push_back('c');
    vec2.push_back('d');
    display(vec2);
    vector<double> vd(3, 3.14); // vector with 3 elements, each initialized to 3.14

    // int element; 
    // int size;
    // cout << "Enter size of vector: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     // taking input from user for each element in vector
    //     // index starts from 0 in vector in C++
    //     cout << "Enter element at "<<i+1<<" : ";  // asking user to input elements
    //     cin >> element;  // user input for vector elements
    //     vi.push_back(element); // adding elements to the vector

    //}
    // display(vi); //
    // vector<int> :: iterator iter = vi.begin(); // creating iterator and resolving scope. template<type> scope-resolved to create iterator iter assigned ref at begining of vector 
    // vi.insert(iter+1,3,34);  // iter is pointer to vi at the second location and 3 copies
    // display(vi); //
    
    
return 0;
}