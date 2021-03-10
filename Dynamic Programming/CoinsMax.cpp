// Make the value X with the maximum number of coins with the given values

#include <iostream>
#include <set>

using namespace std;

int main(void) {
    int N, x; 
    cout << "Enter the value you want to make: "; 
    cin >> N;
    
    int value[N+1]; value[0] = 0;
    set<int> coins;

    cout << "Input the coins values\n";
    while(cin >> x) 
        coins.insert(x);

    for(int i = 1; i <= N; i++) {
        value[i] = 0;
        for(auto c: coins) 
            if(i-c >= 0) 
                value[i] = max(value[i], value[i-c]+1);
    }

    cout << "Maximum number of coins to make the value " << N << " is: " << value[N] << endl;

    return 0;
}