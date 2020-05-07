//Finding the path with maximum sum in a grid.
#include <iostream>
#include <stack>
using namespace std;

int main(void){
int N,M; cin>>N>>M;
int arr[N+1][M+1], sum[N+1][M+1];

for(int i=1; i<=N; i++)
    for(int j=1; j<=M; j++)
        cin>>arr[i][j];
        
for(int i=0; i<=N; i++)
    sum[i][0]=sum[0][i]=0;

for (int i = 1; i <= N; i++)
    for (int j = 1; j <= M; j++)
        sum[i][j] = max(sum[i][j-1], sum[i-1][j]) + arr[i][j];

stack<int> path; path.push(arr[N][M]);

int i=N, j=M;
while(i>1){
    (sum[i-1][j] > sum[i][j-1]) ? i-- : j-- ; 
    path.push(arr[i][j]);
}

cout<<"The path with the maximum sum in grid is: \n";
while(!path.empty()) {cout<<path.top()<<" "; path.pop();}
cout<<endl<<"Maximum sum = "<<sum[N][M]<<endl;

return 0;
}

