// Binary Indexed Tree (Fenwick Tree)
// Time complexity: O(logn)

#include <iostream>
#define N 5

using namespace std;

int arr[N+1], tree[N+1];

int sum(int k) {
    int s = 0;
    while (k >= 1) {
        s += tree[k];
        k -= k&-k;  // k -= p(k)
    }
    return s;
}

void add(int k, int x) {
    while (k <= N) {
        tree[k] += x;
        k += k&-k;
    }
}

int main() {    
    cout << "Array: ";
    for(int i=1; i<=N; i++) {
        cout << (arr[i] = i) << " ";
        add(i, arr[i]);
    }

    cout << "\nFenwick Tree: ";
    for(int i=1; i<=N; i++)
        cout << tree[i] << " ";
    cout << endl;

    for (int i=1; i<=N; i++)
        cout << "sum(1," << i << ") = " << sum(i) << endl;
    return 0;
}