/* Brute-force method for generating all the subarrays for 1D and 2D arrays */

#include <iostream>

#define N 3
#define M 4

using namespace std;

int main() {
    int a[N+1];

    for (int i = 0; i < N; i++)
        a[i] = i+1;

    cout << "\nGenerating all the subarrays of the 1D array given . . .\n\n";

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            for (int k = i; k <= j; k++)
                cout << a[k] << " ";
            cout << endl;
        }
        cout << "\n**********\n";
    }

    int arr[N+1][M+1];
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            arr[i][j] = (i*M)+j+1;
    
    cout << "\nGenerating all the subarrays of the 2D array given . . .\n\n";

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            for(int x = i; x < N; x++)
                for(int y = j; y < M; y++){
                    for(int a = i; a <= x; a++){
                        for(int b = j; b <= y; b++){
                            cout << arr[a][b] << " ";
                        }
                        cout << endl;
                    }
                    cout << "\n**********\n";
                }

    return 0;
}