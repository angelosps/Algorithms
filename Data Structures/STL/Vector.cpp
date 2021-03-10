#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v(5, 5);    // initial size and value

    cout << "v[0] = " << v[0] << endl;
    cout << "v[3] = " << v[3] << endl;

    for (int i = 0; i < 5; i++)
        v[i] = i;

    cout << "v[3] = " << v[3] << endl;

    v.push_back(5);                         
    cout << "v[5] = " << v[5] << endl;  

    v.pop_back();
    cout << "Item in back of the vector: " << v.back() << endl;
    
    for (auto x : v)   
        cout << x << " ";

    cout << endl; 
  return 0;
}
