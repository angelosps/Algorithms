// Permutations the classic way and with STL 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> permutation;
vector<bool> chosen;

void stl() {
    permutation.clear();
    for(int i = 0; i < N; i++) permutation.push_back(i);

    do{
        cout << "Permutation: ";
        for(auto x : permutation) cout << x << " ";
        cout << endl;
    } while(next_permutation(permutation.begin(), permutation.end()));
}

void classic() {
    if(permutation.size() == N) {
        cout << "Permutation: ";
        for(auto x : permutation) cout << x << " ";
        cout << endl;
    } else {
        for(int i = 0; i < N; i++){
            if(chosen[i]) continue;
            chosen[i] = 1;
            permutation.push_back(i);
            classic();
            chosen[i] = 0;
            permutation.pop_back();
        }
    }
}

int main(void) {
    cin >> N;
    chosen.assign(N+1, 0);

    cout << "Permutations (the classic way) . . . \n\n";
    classic();

    cout << "\n\nPermutations (with STL) . . . \n\n";
    stl();

    return 0;
}