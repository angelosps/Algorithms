// Longest Palindromic Subsequence (LPS)
// Top Down (recursive) approach in O(N^2)

#include <iostream>
#include <string>
using namespace std;


int LPS (string s, int i, int j) {

if ( i == j ) return 1;

if ( s[i] == s[j] && j-i == 1 ) return 2; 

if ( s[i] == s[j] ) return ( LPS(s, i+1, j-1) + 2 );

return max( LPS(s, i, j-1), LPS(s, i+1, j) );

}

int main(void){
    
string s;
cin>>s;

cout << "Longest Palindromic Subsequence = " 
<< LPS(s, 0, s.size()-1) << endl;

    return 0;
}