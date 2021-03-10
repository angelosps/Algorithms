// Generating subsets

#include <iostream>
#include <vector>
using namespace std;

vector<int> subset;
int N;

void process(int k) {
    if(k == N) {
        cout << "Subset: ";
        if(subset.empty()) putchar(0xC3), putchar(0x98);
        else for (auto x: subset) cout << x << " ";
        cout << endl;
    } else {
        process(k+1);
        subset.push_back(k);
        process(k+1);
        subset.pop_back();
    }
}

int main() {
    cin >> N;
    process(0);
    
    return 0;
}