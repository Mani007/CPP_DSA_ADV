#include <iostream>
#include <string>
using namespace std;
class BinaryReader{
    private:
        string s;
    public:
        void read_binary();
        void chk_binary();
};
void BinaryReader::read_binary(){
            cout<<"Enter a binary string: "<<endl;
            cin>>s;
        }
void BinaryReader::chk_binary(){
    for(int i=0; i<s.length(); i++){
        if(s[i]!= '0' && s[i]!= '1'){
            cout<<"Invalid binary string. Please enter a valid binary string."<<endl;
            return;
        }
    }
    cout<<"Valid binary string."<<endl;
}
int main() {
    cout << "Nesting of member function" << endl;
    //string s;
    BinaryReader br;
    br.read_binary();
    br.chk_binary();
    return 0;
}