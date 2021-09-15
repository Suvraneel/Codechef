#include<bits/stdc++.h>
using namespace std;
typedef long int ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        ll a[n], b[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i] ^ x;
        }

        unordered_map<ll, ll> hash_init, hash_xor, hash_final;
        for (ll i = 0; i < n; i++){
            hash_init[a[i]]++;
            hash_xor[b[i]]++;
        }
        for (ll i = 0; i < n; i++){
            hash_final[a[i]] = hash_init[a[i]] + hash_xor[a[i]];
        }
        ll maxEq = -1, mode=0;
        for (ll i = 0; i < n; i++){
            if ((maxEq < hash_final[a[i]]) || (maxEq == hash_final[a[i]] && hash_init[a[i]]>hash_init[mode])){
                maxEq = hash_final[a[i]];
                mode = a[i];
            }
        }
        
        if (x!=0)
            cout << hash_final[mode] << " " << hash_xor[mode] << endl;
        else
            cout << hash_init[mode] << " " << 0 << endl;
    }
    return 0;
}