// Missing number in an arithmetic progression
// Divide and Conquer approach in O(logn)
// i.e in arithmetic progression [0, 2, 4, 8, 10] 
// the missing number is 6


#include <iostream>

using namespace std;

int process (int arr[], int N) {
    int low = 0, high = N-1;
    int d = (arr[high] - arr[low]) / N;

    while (low <= high) {
        int mid = high - (high-low) / 2;

        if (mid + 1 < N  && arr[mid+1] - arr[mid] != d)
            return arr[mid+1] - d; 

        if (mid - 1 >= 0 && arr[mid] - arr[mid-1] != d)
            return arr[mid-1] + d;

        if (arr[mid] - arr[0] != ( mid - 0 ) * d)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(void) {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) 
        cin >> arr[i];
        
    cout << "Missing number in the arithmetic progression is: " 
    << process(arr, N) << endl;

    return 0;
}
