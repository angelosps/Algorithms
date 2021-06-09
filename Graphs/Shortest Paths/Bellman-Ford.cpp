//Bellman-Ford algorithm implementation.
//Can detect negative cycles by running the algorithm n times (change the for loop @ line 15)
#include <bits/stdc++.h>
#define inf 1000000000
using namespace std;

set< tuple<int,int,int> > edges;
int n;
int dist[n];

void bellman(int x){
    for(int i = 1; i <= n; i++) 
        dist[i] = inf;
    
    dist[x] = 0;

    for(int i = 1; i <= n-1; i++) { //run one more time to check for negative cycles
        for(auto e: edges) {
            int a, b, w;
            tie(a,b,w) = e;
            dist[b] = min(dist[b],dist[a]+w);
        }
    }
}

int main(void){
    int x, a, b, w;
    cin >> n >> x;

    while(cin >> a >> b >> w)
        edges.insert(make_tuple(a,b,w));

    bellman(x);
    
    cout << "Showing the shortest distances starting from " << x << endl;
    
    for(int i = 1; i <= n; i++) 
        cout << dist[i] << " ";

    return 0;
}
