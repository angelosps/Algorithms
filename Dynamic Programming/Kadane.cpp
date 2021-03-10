//Kadane's algorithm for finding the maximum subarray sum 
//and the subarray where the the maximum sum occurs.

#include <cstdio> 
#include <algorithm>

#define INF 1000000000

using namespace std; 

void MSS(int arr[], int size) { 
	int ans = -INF, currmax = 0, 
	start = 0, end = 0, s = 0, negative = 0, 
	negativeans = -INF, negativeindex = 0;

	for (int i = 0; i < size; i++) {
		if(arr[i] < 0) { //checking if array has only negative numbers
			negative++; 
			negativeans = max(negativeans, arr[i]); 
			negativeindex = i; 
		}
		currmax += arr[i];
		if(currmax > ans) {	//if found largest sum
			ans = currmax; 
			start = s; 
			end = i; 
		}
		if(currmax < 0) { //if max sum goes negative
			currmax = 0; 
			s = i + 1; 
		}
	}

	if(negative == size) { //if all numbers are negative
		printf("All numbers in array are negative numbers.\n");
		printf("Maximum Subarray Sum is: %d. \nFound in position %d of the array.\n", negativeans, negativeindex);
	}
	else 
		printf("Subarray with the maximum sum found in range [%d, %d] with sum = %d.\n", start, end, ans);
} 

int main(void){ 
	int N; 
	scanf("%d", &N);
	int arr[N];

	for(int i = 0; i < N; i++) 
		scanf("%d", &arr[i]);

	MSS(arr, N);

	return 0; 
} 
