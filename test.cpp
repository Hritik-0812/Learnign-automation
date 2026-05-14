#include <iostream>
#include <string>   
using namespace std ;
class Solution {
public:
    int reverse_int ( int n ) {
        string s = to_string ( n ) ;
        return stoi ( s ) ;
    }
    bool is_prime ( int n ) {
        if ( n == 1 ) return false ;
        for ( int i = 2 ; i * i <= n ; i ++ ){
            cout << i << " " ;
            if ( ( n % i  )== 0 ) return false ;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int r = reverse_int ( n ) ;
        cout 
        int sum = 0 ;
        for ( int i = min ( n , r ) ; i <= max ( n , r ) ; i ++ ) {
            if ( is_prime ( i ) ) sum += i ;
            cout << sum  << " " ;
        }
        return sum ;
    }
};
int main () {
    Solution s ;
    int n = 13 ;
    cout << s.sumOfPrimesInRange ( n ) << endl ;
    return 0 ;
}
