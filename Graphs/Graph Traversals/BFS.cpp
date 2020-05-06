//Breadth-First Search implementation. 
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector< vector<int> > adjlist;
vector<bool> visited;

void bfs(int x){
    visited[x]=1;
    queue<int> q;
    q.push(x);

    while(!q.empty()){
        int u=q.front();
        cout<<"Visited "<<u<<endl;
        q.pop();
        for(int j=0; j<adjlist[u].size(); j++){
        int v=adjlist[u][j];
            if(!visited[v]) {visited[v]=1; q.push(v);}
        }
    }
}

int main( void ){
    int n,m,s;
    cin>>n>>m>>s;
    adjlist.assign(n+1, vector<int>());
    visited.assign(n+1, 0);

    while(m--){
        int a,b;
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }

    bfs(s);

    return 0;
}