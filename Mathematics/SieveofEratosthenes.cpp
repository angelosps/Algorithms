#include <iostream>
#define N 100
using namespace std;

bool sieve[N+1];

void process( ){

for(int i=2; i<=N; i++) (i%2==0 && i!=2) ? sieve[i]=0 : sieve[i]=1;

for(int x=2; x*x<=N; x++){
    if(!sieve[x]) continue;
    for(int i=x*x; i<=N; i+=x) 
        sieve[i]=0;
}

}

int main(void){

process();

cout<<"The prime numbers in range[1, "<<N<<"] are:\n";
for(int i=1; i<=N; i++){
    if(sieve[i]) cout<<i<<" ";
}

cout<<endl;

    return 0;
}