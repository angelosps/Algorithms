#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bitset<8> zeros; // constructor initalizes with zeros
    bitset<8> ones(255);

    cout << zeros << endl;
    cout << ones << endl;

    bitset<8> a(string("00010000"));
    bitset<8> b(string("00000100"));

    cout << (a | b) << endl;

    cout << "a >> 2: " << (a >>= 1) << endl;
    cout << "b << 2: " << (b <<= 1) << endl;

    cout << "a == b: " << (a == b) << endl;
    
    a.flip(0);
    cout << "a.flip(0) -> " << a << endl;
    cout << "a == b: " << (a == b) << endl;
    
    return 0;
}