/* Problem:

Gold bars are given and must be joined into a single gold bar.
The cost of pairing two gold bars is the sum of their weight.
Minimize the cost. */

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue< int, vector<int>, greater<int> > pq;

int main( void ){
int n;
cin>>n;

for(int i = 0 ; i < n ; i++) { int a; cin>>a; pq.push(a); }

if ( n == 1 ) { cout << pq.top() << endl; return 1; }
int cost = 0;

while ( pq.size() > 1 ) {
    int a = pq.top(); pq.pop();
    int b = pq.top(); pq.pop();
    cost += (a+b);
    pq.push(a+b);
}

cout << cost << endl;

    return 0;
}