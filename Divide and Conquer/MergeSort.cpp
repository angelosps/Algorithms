//Merge Sort algorithm for sorting an array
//Time Complexity = Θ(NLogN) 
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int left, int mid, int right){

vector<int> L, R;

for(int i=left; i<=mid; i++) L.push_back(arr[i]); 
for(int j=mid+1; j<=right; j++) R.push_back(arr[j]); 

int i=0, j=0; 
int idx=left;

while ( i < L.size() && j < R.size() ) {
    if(L[i] <= R[j])
        arr[idx++] = L[i++];
    else
        arr[idx++] = R[j++];
}

while ( i < L.size() ) arr[idx++] = L[i++];

while ( j < R.size() ) arr[idx++] = R[j++];

}

void mergesort(int arr[], int left, int right){

if(left >= right) return;

int mid= (left + right) / 2;

mergesort(arr, left, mid);
mergesort(arr, mid+1, right);
merge(arr, left, mid, right);

}

int main(void){

int N; cin>>N;
int arr[N];

for(int i=0; i<N; i++) cin>>arr[i];

mergesort(arr, 0, N-1);

cout<<"Sorted array is: \n";

for(int i=0; i<N; i++)
    cout<<arr[i]<<" ";

cout<<endl;

    return 0;
}