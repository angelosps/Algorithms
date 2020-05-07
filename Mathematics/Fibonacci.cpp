//Fibonacci Sequence. 
#include <iostream>
#define N 20 //Calculating the first 20 numbers of Fibonacci Sequence. Adjust for more.
using namespace std;

unsigned long long Fib[N];

int main(void){

Fib[1] = Fib[2] = 1;

cout<<Fib[0]<<" "<<Fib[1]<<" "<<Fib[2]<<" ";

for(int i=3; i<N; i++){
    Fib[i] = Fib[i-1] + Fib[i-2];
    cout<<Fib[i]<<" ";
}

cout<<endl;

    return 0;
}
