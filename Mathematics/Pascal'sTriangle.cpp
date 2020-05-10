// Pascal's Triangle using Binomial Coefficients
// C(n,k) = n! / ( k! * (n-k)! ) 

#include <iostream>
using namespace std;

int main(void){
    
    int n;

    cout << "Enter number of lines: ";
    cin >> n;

    for(int line = 1; line <= n; line++){
        
        for(int space = 1; space <= n-line; space++) cout <<"  ";
        
        int C = 1;
        for(int k = 1; k <= line; k++){
            cout << C << "   ";
            C = C * (line-k) / k;
        }    
        
        cout << endl;
    }

    return 0;
}