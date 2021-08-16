#include <bits/stdc++.h>
using namespace std;
const int mod = 1E9+7;
typedef unsigned long long int ulli; 

/* Iterative Function to calculate (x^y)%p in O(log y) ... Attribution: Geek4geek => Modular Exponentiaion*/
ulli pow_fn(ulli x, int y){
    ulli res = 1;     // Initialize result
    x %= mod;
    if (x == 0)
        return 0; // In case x is divisible by p;
 
    while (y >= 1)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;
 
        // y must be even now
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
 
// Main Driver code
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ulli t, n;
    cin >> t;
    while (t--){
        cin >> n;
        ulli final = pow_fn(2 , n-1);
        cout << final << endl;
    }
    return 0;
}
