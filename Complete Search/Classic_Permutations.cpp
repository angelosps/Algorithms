//Generating permutations in classic way
#include <iostream>
#include <vector>
using namespace std;

vector<int> permutation;
vector<bool> chosen;
int n;

void process(){
    if(permutation.size() == n){
        cout<<"Permutation: ";
        for(auto x : permutation) cout<<x<<" ";
        cout<<endl;
    }else{
        for(int i=0; i<n; i++){
            if(chosen[i]) continue;
            chosen[i]=1;
            permutation.push_back(i);
            process();
            chosen[i]=0;
            permutation.pop_back();
        }
    }
}

int main( void ) {
cin>>n;

chosen.assign(n+1, 0);

process();

    return 0;
}