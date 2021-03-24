// Union-Find Disjoint Sets
// Time complexity: O(logn) 

#include <iostream>
#define N 5
using namespace std;

int link[N+1], size[N+1];

int find(int x) {
    while (x != link[x]) x = link[x];
    return x;
}

bool same(int a, int b) { 
    return find(a) == find(b); 
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (size[a] < size[b]) swap(a,b);
    size[a] += size[b];
    link[b] = a;
}

int main() {
    // initially each element belongs to a separate set
    // and size of each set is 1
    for (int i=1; i<=N; i++) 
        link[i] = i, size[i] = 1;

    cout << "find(1): " << find(1) << endl;
    cout << "find(2): " << find(2) << endl;
    cout << "same(1,2) = " << same(1,2) << endl;
    cout << "unite(1,2)\n";
    unite(1,2);
    cout << "same(1,2) = " << same(1,2) << endl;
    cout << "find(1): " << find(1) << endl;
    cout << "find(2): " << find(2) << endl;
    return 0;
}