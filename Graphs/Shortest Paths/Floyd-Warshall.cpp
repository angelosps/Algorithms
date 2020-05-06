//Floyd-Warshall All Pairs Shortest Path algorithm.
#include <iostream>
using namespace std;
int inf = 1000000000;

int main(){
int n, m;
cin >> n >> m;

int G[n][n];

for (int i=0; i<n; i++){
    for (int j=0; j<n; j++)
       G[i][j] = inf;
       G[i][i] = 0;
}

for (int i=0; i<m; i++){
int a,b,w;
     cin >> a >> b >> w;
     G[a-1][b-1] = w;
}

for (int k=0; k<n; k++)
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            G[i][j] = min(G[i][j], G[i][k] + G[k][j]);

for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        cout << "Shortest Path ("<< i <<","<< j << ")=" << G[i][j] << endl;

return 0;
}