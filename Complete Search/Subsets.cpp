// Generating subsets with both recursion and iteration

#include <iostream>
#include <vector>
using namespace std;

vector<int> subset;
int N;

void sub_iter() {
    for (int i = 0; i < (1 << N); i++) {
        printf("Subset: ");
        if (i == 0) {
            putchar(0xC3), putchar(0x98), putchar(10);
            continue;
        }
        for (int j = 0; j < N; j++)
            if (i & (1 << j))
                printf("%d ", j);
        printf("\n");
    }
}

void sub_rec(int k) {
    if(k == N) {
        printf("Subset: ");
        if(subset.empty()) putchar(0xC3), putchar(0x98);
        else for (auto x: subset) printf("%d ", x);
        cout << endl;
    } else {
        sub_rec(k+1);
        subset.push_back(k);
        sub_rec(k+1);
        subset.pop_back();
    }
}

int main() {
    cin >> N;
    printf("\nSubsets with recursion..\n");
    sub_rec(0);
    printf("\nSubsets with iteration..\n");
    sub_iter();
    return 0;
}