//N Queens - Backtracking
#include <iostream>
#define n 4
using namespace std;

bool column[n], diag1[2*n-1], diag2[2*n-1];
int cnt;
void process(int y){
    if(y==n) { cnt++; return; } 
    for(int x=0; x<n; x++){
        if(column[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        column[x]=diag1[x+y]=diag2[x-y+n-1]=1; 
        process(y+1);
        column[x]=diag1[x+y]=diag2[x-y+n-1]=0; 
    }
}

int main( void ) {

process(0);

cout<<cnt<<endl;

    return 0;
}