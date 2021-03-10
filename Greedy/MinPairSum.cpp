// Forming pairs such that the maximum pair sum is minimized (greedy approach)

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int N; 
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++) 
        cin >> arr[i];

    sort(arr, arr+N);

    for(int i = 0, j = N-1; i <= j; i++, j--)
        cout << "(" << arr[i] << 
        ", " << arr[j] << ") ";

    cout << endl;

    return 0;
}