#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define T ll tt; cin >> tt; while(tt--)
#define ms min_steps=min(min_steps,solve(h,k,Xarr,Yarr,n));
#define infLoop while(true)
#define pb push_back
#define mp make_pair
#define forn(i, n) for(ll i = 0; i < n; i++)
#define fora(i, a, n) for(ll i = a; i < n; i++)
const ll M = 1e9+7;

void fastio(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

ll primeFactors(ll n,  ll a, ll b)
{
    ll even = 0, odd = 0;
    // Prll the number of 2s that divide n
    while (n % 2 == 0)
    {
        even ++;
        n = n/2;
    }

    // n must be odd at this poll. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, prll i and divide n
        while (n % i == 0)
        {
            // cout << i << " ";
            odd++;
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2){
        // cout << n << " ";
        odd++;
    }

    ll skore = 0;
    if (a>0)
        skore += a*even;
    else skore += (even) ? a : 0;
    if (b>0)
        skore += b*odd;
    else skore += (odd) ? ((even) ? 0 : b) : 0;
    return skore;
}

int main(){
    fastio();
    T{
        ll n, a, b;
        cin >> n >> a >> b;
        cout << ((a<0 && b<0) ? ((n%2) ? b : a) : primeFactors(n, a, b));
        cout << endl;
    }
    return 0;
}