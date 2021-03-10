#include <iostream>
#include <map>

using namespace std;

int main() {
    cout << "*** Map *** \n";

    map<string, int> m;

	m["apples"] = 5;
	m["oranges"] = 3;
	m["bananas"] = 4;
    m["watermelons"] = 2;

	cout << "m[\"apples\"] = " << m["apples"] << endl;
    cout << "m[\"oranges\"] = " <<  m["oranges"] << endl;
    cout << "m[\"bananas\"] = " << m["bananas"] << endl;
    cout << "m[\"watermelons\"] = " <<  m["watermelons"] << endl;

    cout << "\nm.count(\"apples\"): " << m.count("apples") << endl;
    cout << "m.count(\"pears\"): " << m.count("pears") << endl;

    cout << "\nm.size(): " << m.size() << endl;

	for(auto x : m)
		cout << x.first << " "
        << x.second << endl;

    cout << "\n*** Multimap *** \n";
    multimap<string, int> mm;

	mm.insert(pair<string, int> ("apples", 5));
    mm.insert(pair<string, int> ("apples", 4));
    mm.insert(pair<string, int> ("bananas", 2));

	cout << "mm.count(\"apples\"): " << mm.count("apples") << endl;
    mm.erase("apples");
    cout << "mm.count(\"apples\"): " << mm.count("apples") << endl;

	for(auto x : mm)
		cout << x.first << " "
        << x.second << endl;

    return 0;
}