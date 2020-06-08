#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#define MAX_N 100000
typedef vector<int> vi;

int N, E;
bool visited[MAX_N];
vector<vi> adjlist;
stack<int> S;

void process(int v) { 
	visited[v] = true; 

	for (auto u: adjlist[v]) 
		if (!visited[u]) 
			process(u); 

	S.push(v); 
} 

void TopoSort() { 

	for (int i = 0; i < N; i++) 
		if (!visited[i]) 
			process(i); 

	while ( !S.empty() ) { 
		cout << S.top() << " "; 
		S.pop(); 
	} 
} 

int main(void) { 
	cin>>N>>E;
	
	adjlist.assign(N+1, vi());

    while(E--){
        int a,b;
        cin>>a>>b;
        adjlist[a].push_back(b);
    }

    TopoSort();
	
	cout << endl;

	return 0; 
} 
