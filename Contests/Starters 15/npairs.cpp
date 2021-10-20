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

int printNcR(int n, int r){
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}

int main(){
    fastio();
    T{
        int c=0, n;
        string s, d = "";
        cin >> n >> s;
        forn(i, n-1){
            if(abs(s[i+1]-s[i])==1)
                d+="1";
            else d+="0";
        }
        // cout << d << endl;

        stringstream str(d);
        string w;
        while(getline(str, w, '0')){
            int temp = w.length();
            if(temp>1)
                c+= printNcR(temp, 2);
            c+=temp;
        }
        cout << c << endl;
    }
    return 0;
}