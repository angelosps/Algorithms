// N Queens using bitmasks

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 14;
int ans, OK = (1 << N) - 1;

void backtrack(int rw, int ld, int rd) {
    if (rw == OK) { ans++; return; }    
    int pos = OK & (~(rw | ld | rd));   
    while (pos) {
        int p = pos & -pos;
        pos -= p;
        backtrack(rw | p, (ld | p) << 1, (rd | p) >> 1);
    }
}

int main() {
    backtrack(0, 0, 0);
    printf("%d\n", ans);
    return 0;
}
