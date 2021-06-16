//Calculating the prime factorization of a number.
#include <iostream>
#include <vector>

using namespace std;
vector<int> factors;

void primefact(int x) {
    for (int i = 2; i*i <= x; i++)
        while (x % i == 0) {
            factors.push_back(i), x/=i;
        }

    if (x > 1) factors.push_back(x);
}

int main(){
    int x; cin >> x;

    primefact(x);

    cout << "Prime factorization of " << x << " is:\n";
    for (auto y : factors) cout << y << " ";

    cout << endl;

    return 0;
}
