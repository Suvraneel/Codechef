#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        //fast.io
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n, m;
        cin >> n >> m;
        ll res = 0;
        vector <ll> modulus(n+1, 1);
        for(ll i=2; i< n+1; i++){
            ll a = m % i;
            res = res + modulus[a];
            for(ll j=a; j < n+1; j = j+i)
                modulus[j] += 1;
        }
        cout << res << "\n";
    }
    return 0;
}
