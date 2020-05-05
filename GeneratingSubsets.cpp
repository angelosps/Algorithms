//Generating Subsets
#include <iostream>
#include <vector>
using namespace std;

vector<int> subset;
int n;

void process(int k){
    if(k==n){
        cout<<"Subset: ";
        if(subset.empty()) putchar(0xC3), putchar(0x98);
        else for(auto x: subset) cout<<x<<" ";
        cout<<endl;
    }else{
        process(k+1);
        subset.push_back(k);
        process(k+1);
        subset.pop_back();
    }
}

int main( void ) {
cin>>n;

process(0);
    return 0;
}