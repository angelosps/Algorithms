//Finding the shortest cycle in a graph using Floyd-Warshall's algorithm.
#include <iostream>
using namespace std;
int inf = 1000000000;

int main(void){
int n, m;
cin >> n >> m;

int G[n+1][n+1];

for (int i=1; i<=n; i++){
    for (int j=1; j<=n; j++)
       G[i][j] = inf;
}

for (int i=0; i<m; i++){
int a,b,w;
     cin >> a >> b >> w;
     G[a][b] = w;
}

int ans = inf;

for (int k=1; k<=n; k++)
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++) {
            G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
            ans = min(ans, G[i][i]);
        }
if ( ans == inf ) cout << "Graph is an acyclic graph.\n";
else{
    for (int i=1; i<=n; i++)
        cout << "Shortest Cycle ("<< i <<","<< i << ") = " << G[i][i] << endl;

    cout << "The shortest cycle in the graph has length " << ans << endl;
}
return 0;
}