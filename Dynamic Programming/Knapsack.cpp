// Knapsack Problem 
// Bottom Up approach
#include <iostream> 
using namespace std;

int knapsack(int N, int W, int val[], int w[]) { 

	int K[N + 1][W + 1]; 

	for (int i = 0; i <= N; i++) { 
		for (int j = 0; j <= W; j++) { 
			if ( i == 0 || j == 0 )  
				K[i][j] = 0; 
			else if ( w[i] <= j ) 
				K[i][j] = max( val[i] + K[i - 1][j - w[i]], K[i - 1][j] ); 
			else
				K[i][j] = K[i - 1][j]; 
		} 
	} 

	return K[N][W]; 
} 

int main(void) { 

    int N, W;

    cin >> N >> W;

    int val[N+1], w[N+1];

    for(int i = 1; i <= N; i++)
        cin >> val[i] >> w[i];
	
    cout << knapsack(N, W, val, w) << endl ; 
	
    return 0; 
    
} 

