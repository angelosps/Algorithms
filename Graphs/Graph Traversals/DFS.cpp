//Depth-First Search implementation.
#include <iostream>
#include <vector>
using namespace std;

vector< vector<int> > adjlist;
vector<bool> visited;

void dfs(int x){
    visited[x]=1;
    cout<<"Visited "<<x<<endl;
    for(int j=0; j<adjlist[x].size(); j++)
        if(!visited[adjlist[x][j]]) dfs(adjlist[x][j]);
}

int main(){
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

    dfs(s);

    return 0;
}