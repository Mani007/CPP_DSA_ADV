#include <iostream>
//#include <bits/stdc++.h>
#include <vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0; i<v.size();i++){
        cout << "Vector element at index "<<i <<" is "<< v[i] <<endl;
    }
}
int main() {
    cout << "Basics of Vectors" << endl;
    vector<int> vi; // declaration of an empty vector of integers
    int element; 
    int size;
    cout << "Enter size of vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        /* code */
        // taking input from user for each element in vector
        // index starts from 0 in vector in C++
        cout << "Enter element at "<<i+1<<" : ";  // asking user to input elements
        cin >> element;  // user input for vector elements
        vi.push_back(element); // adding elements to the vector

    }
    display(vi); //
    
    
return 0;
}