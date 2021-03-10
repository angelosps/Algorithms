// Finding minimum amount of coins to make the X value (greedy approach)

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    if(x < y) 
        return false;
    return true;
}

int main(void) 
    int n, x, ans = 0;

    cin >> n >> x;

    int coins[n];

    for(int i = 0; i < n; i++) 
        cin >> coins[i];

    sort(coins, coins+n, cmp);

    for(int i = 0; i < n; i++){
        ans += x/coins[i];
        x %= coins[i];
    }

    cout << ans << endl;

    return 0;
}