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

bool sortbytime(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}

int main(){
    fastio();
    T{
        int n, m, k;
        cin >> n >> m >> k;
        int c[n], t[n], res[n];
        forn(i,n)cin >> c[i];
        forn(i,n)cin >> t[i];
        forn(i,n)res[i]=0;
        vector<pair<int,int>> v;
        forn(i,n)
            if (c[i]<m)
                v.pb(mp(c[i],t[i]));
        sort(v.begin(), v.end(), sortbytime);
        int clk=0;
        while (clk <=k){
            forn(i, v.size()){
                if (clk + v[i].second <= k){
                    res[v[i].first]++;
                    clk += v[i].second;
                }
            }
        }
        int cnt=0;
        forn(i,n)cout << ceil(res[i]/2) << " $ ";
        // cout << cnt << endl;
    }
    return 0;
}