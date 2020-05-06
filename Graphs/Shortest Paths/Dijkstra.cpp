//Dijkstra implementation for shortest paths
//using priority queue
#include <iostream>
#include <vector>
#include <queue>
#define inf 1000000000
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vector<vii> adjlist;
priority_queue< ii, vii, greater<ii> > pq;
vi dist;

void dijkstra(int s){
dist[s]=0;
pq.push(ii(0, s));

while (!pq.empty()){
    ii front = pq.top();
    pq.pop();

    int w = front.first;
    int u = front.second;

    if(w > dist[u]) continue;

    for(int j=0; j<adjlist[u].size(); j++){
        ii v=adjlist[u][j];
        if (dist[u] + v.second < dist[v.first]){
            dist[v.first] = dist[u]+v.second;
            pq.push(ii(dist[v.first], v.first));
        }
    }
}
}

int main(void){
int n, m, s;
cin >> n >> m >> s;
adjlist.assign(n, vii());
dist.assign(n, inf);

for (int i=0; i<m; i++) {
int a, b, w;
    cin >> a >> b >> w;
    adjlist[a].push_back(ii(b, w));
}

dijkstra(s);

for (int i=0; i<n; i++) cout << "Shortest Path ("<< s<<"," << i <<")=" << dist[i] << endl;

return 0;
}
