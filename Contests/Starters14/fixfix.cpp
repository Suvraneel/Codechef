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

int main(){
    fastio();
    T{
        ll n, k;
        cin >> n >> k;
        if (n-k==1){
            cout << "-1" << endl;
            continue;
        }
        if (n==k){
            forn(i,n)
            cout << i+1 << " ";
            cout << endl;
            continue;
        }
        ll a[n];
        forn(i,n) a[i]=i;
        fora(i, k, n-1)a[i]=a[i+1];
        a[n-1]=k;
        forn(i,n)
            cout << a[i]+1 << " ";
        cout << endl;
    }
    return 0;
}