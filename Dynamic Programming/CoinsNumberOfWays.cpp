//Number of ways to make the value X with the given coins' values.
#include <iostream>
#include <set>
#define m 1000000007
using namespace std;

int main(void){
int N, x;
cout<<"Enter the value you want to make: "; cin>>N;

int solve[N+1]; solve[0]=1;
set<int> coins;

cout<<"Input the coins' values\n";
while(cin>>x) coins.insert(x);

for(int i=1; i<=N; i++){
solve[i]=0;
    for(auto c: coins) 
        if(i-c>=0) solve[i]+=solve[i-c], solve[i]%=m;
}
//for(int i=1; i<=N; i++) cout<<solve[i]<<" ";
cout<<"Number of ways to make the value "<<N<<" with the given coins is: "<<solve[N]<<endl;

    return 0;
}