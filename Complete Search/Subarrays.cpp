/* Brute-force method for generating all the subarrays for 1D and 2D arrays */

#include <iostream>

#define N 3
#define M 4

using namespace std;

int main() {
    int a[N+1], cnt1 = 0, cnt2 = 0;

    cout << "Generating the subarrays for the 1D array below . . .\n";

    for (int i = 0; i < N; i++) {
        a[i] = i+1;
        cout << a[i] << " ";
    }
    
    cout << endl << endl;

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            for (int k = i; k <= j; k++)
                cout << a[k] << " ";
            cout << "\n**********\n";
            cnt1++;
        }
    }

    cout << "\nNumber of 1D subarrays: " << cnt1 << endl << endl;

    cout << "\nGenerating the subarrays for the 2D array below . . .\n";

    int arr[N+1][M+1];
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            arr[i][j] = (i*M)+j+1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nGenerating all the subarrays of the 2D array given . . .\n\n";

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            for(int x=i; x<N; x++)
                for(int y=j; y<M; y++) {
                    for(int a=i; a<=x; a++) {
                        for(int b=j; b<=y; b++) {
                            cout << arr[a][b] << " ";
                        }
                        cout << endl;
                    }  
                    cnt2++;
                    cout << "*************" << endl;
                }
  
    cout << "Number of 2D subarrays: " << cnt2 << endl << endl;

    return 0;
}