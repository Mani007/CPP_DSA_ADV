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
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << "Enter element at "<<i+1<<" : ";  // asking user to input elements
        cin >> element;  // user input for vector elements
        vi.push_back(element); // adding elements to the vector

    }
    display(vi); //
    
    
return 0;
}