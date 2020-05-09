//Maximum Subarray Sum using Divide and Conquer technique.
//Time Complexity = Θ(NLogN)

#include <iostream>
#define INF 100000000
using namespace std;

int max_crossing_sum(int arr[], int left, int mid, int right){

int sum=0;
int leftsum = -INF;
//finding the max sum in left
for(int i = left; i<=mid; i++){
    sum += arr[i];
    leftsum = max( leftsum, sum );
}

int rightsum = -INF; sum=0;
//finding the max sum in right
for(int i = mid+1; i <= right; i++){
    sum+=arr[i];
    rightsum = max(rightsum, sum);
}

return max(leftsum + rightsum, max(leftsum, rightsum));
}

int MSS(int arr[], int left, int right){
    if( left == right ) return arr[left];

    int mid = (left + right) / 2;
    
    return ( max( MSS(arr, left, mid), max( MSS(arr, mid+1, right), max_crossing_sum(arr, left, mid, right) ) ) );
}

int main(void){

int N; cin>>N;
int arr[N];

for(int i=0; i<N; i++) cin>>arr[i];

cout<<"Maximum Subarray Sum is: "<<MSS(arr, 0, N-1)<<endl;
    return 0;
}
