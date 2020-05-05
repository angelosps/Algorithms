//Generating permutations using STL
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void ) {
vector<int> permutation;
int n; cin>>n;

for(int i=0; i<n; i++) permutation.push_back(i);

do{
    cout<<"Permutation: ";
    for(auto x : permutation) cout<<x<<" ";
    cout<<endl;
}while(next_permutation(permutation.begin(), permutation.end()));

    return 0;
}