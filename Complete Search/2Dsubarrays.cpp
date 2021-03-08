/* Brute-force method for generating all the subarrays of a 2D N x M matrix in O(N^3 x M^3) */

#include <iostream>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    
    int arr[N+1][M+1];
    
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> arr[i][j];
    
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            for(int x=i; x<N; x++)
                for(int y=j; y<M; y++){
                    for(int a=i; a<=x; a++){
                        for(int b=j; b<=y; b++){
                            cout << arr[a][b] << " ";
                        }
                        cout << endl;
                    }
                    cout << "\n**********\n";
                }

return 0;
}