#include <bits/stdc++.h>
using namespace std;
typedef long int ll;
typedef long double ld;
#define T int tt; cin >> tt; while(tt--)
#define ms min_steps=min(min_steps,solve(h,k,Xarr,Yarr,n));
#define infLoop while(true)
#define forn(i, n) for(ll i = 0; i < n; i++)
#define fora(i, a, n) for(ll i = a; i < n; i++)
const int M = 1e9+7;

void fastio(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

// Recursive function to return gcd of a and b
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    fastio();
    T{
        int n;
        cin >> n;
        int a[n];
        forn(i, n){
            cin >> a[i];
            a[i] = __builtin_ctz(a[i]);
        }
        int mina = a[0];
        forn(i,n) mina=min(mina,a[i]);
        cout << mina << endl;
    }
    return 0;
}