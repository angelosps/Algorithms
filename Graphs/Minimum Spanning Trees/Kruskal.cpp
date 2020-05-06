//Kruskal's Algorithm for Minimum Spanning Trees using disjoint sets.
#include <bits/stdc++.h>
using namespace std;

vector< pair<int, pair<int,int> > > adj;
int link[1000];
int size[1000];
​int n,e;

int find(int x){
    while(x != link[x]) x=link[x];
    return x;
}
​
bool same(int a,int b){ 
    return find(a)==find(b); 
}
​
void unite(int a,int b){
    a=find(a);
    b=find(b);
    ​
    if(size[a] < size[b]) swap(a,b);
    size[a]+=size[b];
    link[b]=a;
}
​
int main(void){
cin>>n>>e;
​
for(int i=0; i<e; i++){
int a,b,w;
    cin>>a>>b>>w;
    adj.push_back({w,{a,b}});
}
​
sort(adj.begin(), adj.end());
​
for(int i=1; i<=n; i++) link[i]=i, size[i]=1;
int cost=0;
for(int i=0; i<e; i++){
int a=adj[i].second.first;
int b=adj[i].second.second;
​
if(!same(a,b)) unite(a,b), cost+=adj[i].first;
}

cout<<cost<<endl;
​
return 0;
}