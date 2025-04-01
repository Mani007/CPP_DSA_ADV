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
    for (int i = 0; i < 5; i++)
    {
        /* code */
        vi.push_back(i); // adding elements to the vector
    }
    display(vi); //
    
    
return 0;
}