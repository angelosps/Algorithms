//Prim's algorithm implementation for Minimum Spanning Tree 
//using priority queue. 
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vector<vii> adjlist;
vi taken;
priority_queue< ii, vector<ii>, greater<ii> > pq;

void process(int edge){
taken[edge] = 1;
    for (auto v : adjlist[edge])
        if (taken[v.first]==0) 
            pq.push(ii(v.second, v.first));

}

int main(void){
int N, E, s;
cin>>N>>E>>s;

adjlist.assign(N, vii());

for (int i = 0; i < E; i++){
    int a,b,w;
    cin>>a>>b>>w;
    adjlist[a].push_back(ii(b, w));
    adjlist[b].push_back(ii(a, w));
}

taken.assign(N, 0);
process(0);
int cost=0;

while (!pq.empty()){
    ii front = pq.top();
    pq.pop();
    int w = front.first;
    int u = front.second;
    if (!taken[u]) cost += w;
    process(u);
}

cout<<"Minimum Spanning Tree cost = "<<cost<<endl;

return 0;
}