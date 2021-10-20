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
        ll R[5];
        ll I=0, E=0;
        forn(i, 5){
            cin >> R[i];
            if (!(R[i]))
                continue;
            if (R[i]&1)
                I++;
            else E++;
        }
        cout << ((I==E) ? "DRAW" : (I>E) ? "INDIA" : "ENGLAND") << "\n"; 
    }
    return 0;
}