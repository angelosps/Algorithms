#include <iostream>

#define NOT_FOUND -1

using namespace std;

int binary_search(int arr[], int left, int right, int x) {
    if(right < left) return NOT_FOUND;

    int mid = (right + left) / 2;

    if(arr[mid] == x) return mid;
    if(arr[mid] > x) return binary_search(arr, left, mid-1, x);
    return binary_search(arr, mid+1, right, x);
}

int main(void) {
    int N, x; 
    cin>>N;
    int arr[N];

    for(int i = 0; i < N; i++) 
        cin >> arr[i];
    
    cout << "Input the item you want to search for\n";
    cin >> x;
    
    int ans = binary_search(arr, 0, N-1, x);
    
    (ans == NOT_FOUND) ? cout << "Item was not found.\n" : 
    cout<<"Item was found at position " << ans << endl;

    return 0;
}
