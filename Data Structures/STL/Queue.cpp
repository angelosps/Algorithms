#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);

    cout << q.front() << " ";
    cout << q.back() << endl;
    cout << "q.empty(): " << q.empty() << endl;

    q.pop();
    cout << q.front() << " ";
    cout << q.back() << endl;
    q.pop();
    cout << "q.empty(): " << q.empty() << endl;

    return 0;
}