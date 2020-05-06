//Coloring a graph with M colors. Backtracking approach
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector< vector<int> > adjlist;
vector<int> color;
int N, E, M; //Number of Nodes, Edges and Colors

bool isok (int x, int c) { 
     for(auto y: adjlist[x]) //if any adjacent node has this color assigned then this color isn't available
		if (color[y] == c) return false; 
	return true; 
} 

bool coloring(int x) { 
	if (x == N) return true; 

	for (int col = 0; col < M ; col++) { 
		if (isok(x, col)) { //if this color doesn't conflict with adjacent's color
            color[x] = col; //color assigned to x
            if (coloring (x+1) == true) return true; //process the next node
		    color[x] = -1; //no solution found assigning this color
		} 
	} 

	return false; 
} 

int main( void ) { 
string color_names[14]= {"red", "green", "blue", "yellow", "orange", "violet",
                "magenta", "white", "black", "pink", "brown", "cyan", 
                "grey", "purple"};

cin>>N>>E>>M; //reading Number of Nodes, Edges and colors

adjlist.assign(N+1, vector<int>());
color.assign(N+1, -1); //initialize nodes' color

for(int i=0; i<E; i++){
    int a,b;
    cin>>a>>b;
    adjlist[a].push_back(b);
    adjlist[b].push_back(a);
}
	
if( coloring(0) == false )
    cout<<"No solution exists.\n";
else{
cout<<"\nNode\tColor\n";
    for(int i=0; i<N; i++) 
        cout<<i<<"\t"<<color_names[color[i]]<<endl;
}

	return 0; 
} 
