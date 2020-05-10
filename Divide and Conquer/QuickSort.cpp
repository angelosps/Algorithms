//QuickSort algorithm implementation
//Time Complexity = Θ(NLogN)

#include <iostream> 
using namespace std; 

int partition (int arr[], int low, int high) {

    int mid = (low + high) / 2;     // find the mid position
    int pivot = arr[mid];           // pivot is the median element 
    int idx = (low - 1);            // index of the latest smallest item 
    int pos = mid;                  // position of the pivot 

    for (int i = low; i <= high ; i++) { 
        if (arr[i] < pivot)         // if item is smaller than pivot
        swap(arr[++idx], arr[i]);   // place it after the latest smallest item
            
        if(arr[i] == pivot) pos=i;  // update the pivot's position	
    } 

    swap(arr[++idx], arr[pos]);     // put the pivot after its last smaller item 

    return (idx); 

} 

void quicksort(int arr[], int low, int high){ 

	if (low >= high) return; 
	
	int pi = partition(arr, low, high); 

	quicksort(arr, low, pi - 1); 
	quicksort(arr, pi + 1, high); 
	 
} 

int main(void){ 
	
    int N; cin>>N;
    
    int arr[N];
    
    for(int i=0; i<N; i++) cin>>arr[i];

    quicksort(arr, 0, N - 1); 
	
    cout<<"Sorted array is: \n"; 
	
    for (int i=0; i<N; i++) 
	cout<<arr[i]<<" "; 
	
    cout<<endl;  
	
    return 0; 
} 
