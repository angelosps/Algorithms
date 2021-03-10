#include <iostream>
#include <queue>

using namespace std;

int main() {
    deque<int> d;
    
    d.push_back(1);
    d.push_back(2);
    d.push_front(0);
    cout << d.front() << " " << d.back() << endl;
    cout << "d.empty(): " << d.empty() << endl;

    d.pop_front();
    cout << d.front() << " " << d.back() << endl;
    d.pop_back(); d.pop_back();
    cout << "d.empty(): " << d.empty() << endl;
}