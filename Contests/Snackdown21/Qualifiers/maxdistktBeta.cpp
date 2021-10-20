#include <bits/stdc++.h>
using namespace std;
typedef long int ll;
typedef long double ld;
#define T int tt; cin >> tt; while(tt--)
#define ms min_steps=min(min_steps,solve(h,k,Xarr,Yarr,n));
#define infLoop while(true)
#define pb push_back
#define mp make_pair
#define forn(i, n) for(ll i = 0; i < n; i++)
#define fora(i, a, n) for(ll i = a; i < n; i++)
const int M = 1e9+7;

void fastio(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}


int main(){
    fastio();
    T{
        ll n; cin >> n;
        multimap<int, int> m;
        ll C[n], B[n];
        forn(i, n){
            cin >> B[i]; 
            m.insert({B[i], i});
        }
        ll c=0, token = -1;
        for (auto it=m.begin(); it != m.end(); ++it){
            auto range = m.equal_range(it->first);
            for(auto same=range.first; same!=range.second; ++same){    
                if (token<it->first)
                    token+=1;
                C[it->second]=token;
                ++it;
            }
        }
        // sort(B, B+n);
        forn(i, n)
            cout << C[i] << " ";
        // ll c = 0;
        // forn(i, n){
        //     if (c<=B[i])
        //         C[i] = c++;
        //     else C[i] = c-1;
        // }
    }
    return 0;
}