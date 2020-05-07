//Calculating the prime factorization of a number.
#include <iostream>
#include <vector>

using namespace std;
vector<int> factors;

void primefact(int x){
while(x%2==0 || x%3==0){
    if(x%2==0) factors.push_back(2), x/=2; 
    else factors.push_back(3), x/=3;
}

for(int i=5; i*i<=x; i+=6)
    while(!x%i) factors.push_back(i), x/=i;

if(x>1) factors.push_back(x);
}

int main(){
int x; cin>>x;

primefact(x);

cout<<"Prime factorization of "<<x<<" is:\n";
for(auto y : factors) cout<<y<<" ";

cout<<endl;

    return 0;
}
