//Catalan Numbers sequence using DP approach. 
#include<iostream> 
#define N 10 //calculating the first 10 catalan numbers. adjust for more.
using namespace std; 

unsigned long long catalan[N+1]; 

void process (){ 
	catalan[0] = catalan[1] = 1; 

	for (int i=2; i<=N; i++){ 
		for (int j=0; j<i; j++) 
			catalan[i] += catalan[j] * catalan[i-j-1]; 
	} 

} 

int main(void){

process();
cout<<"First "<<N<<" Catalan numbers are:\n";

for(int i=0; i<N; i++)
    cout<<catalan[i]<<" ";

cout<<endl;

	return 0; 
} 
