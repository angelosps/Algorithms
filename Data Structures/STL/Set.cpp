#include <iostream>
#include <set>

using namespace std;

int main() {
    cout << "*** Set ***\n";

    set<int> s;

    for (int i = 1; i <= 5; i++)
        s.insert(i);

    for (auto x : s) 
        cout << x << " ";

    cout << "\ns.count(2): " << s.count(2) << endl;
    cout << "s.count(6): " << s.count(6) << endl;

    s.erase(s.find(2));

    cout << "s.count(2): " << s.count(2) << endl;

    cout << "\n*** Multiset ***\n";

    multiset<int> ms;

    for (int i = 1; i <= 5; i++)
        ms.insert(i);

    for (auto x : ms) 
        cout << x << " ";

    ms.insert(5);
    ms.insert(5);
    ms.insert(5);

    cout << "\nms.count(5): " << ms.count(5) << endl;
    cout << "ms.count(6): " << ms.count(6) << endl;

    ms.erase(ms.find(5));   // deletes one instance of 5

    cout << "ms.count(5): " << ms.count(5) << endl;

    ms.erase(5);    // deletes every instance of 5 in the multiset

    cout << "ms.count(5): " << ms.count(5) << endl;
    
    return 0;
}