// N Queens - Backtracking

#include <iostream>

#define N 4

using namespace std;

bool column[N], diag1[2*N-1], diag2[2*N-1];
int cnt;

void process(int y) {
    if(y == N) { cnt++; return; } 
    for(int x = 0; x < N; x++) {
        if(column[x] || diag1[x+y] || diag2[x-y+N-1]) 
            continue;
        column[x] = diag1[x+y] = diag2[x-y+N-1] = 1; 
        process(y+1);
        column[x] = diag1[x+y] = diag2[x-y+N-1] = 0; 
    }
}

int main() {
    process(0);
    cout << cnt << endl;
    
    return 0;
}