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
        ll C[n], B[n];
        vector<pair<int,int> >v;
        forn(i, n){
           cin >> B[i];
           v.pb({B[i], i});
        }
        sort(v.begin(),v.end());
        ll c = 0;
        int i=0;
        for(auto it = v.begin(); it!= v.end(); ++i, ++it){
            if (c<it->first)
                C[it->second] = c++;
            else C[it->second] = 0;
        }

        forn(i, n)
            cout << C[i]+B[i] << " ";
        cout << endl;
    }
    return 0;
}