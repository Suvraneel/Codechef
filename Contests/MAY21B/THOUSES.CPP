#include<bits/stdc++.h>
using namespace std;

const int maxnum = 3E5+5;
const int mod = 1E9+7;
typedef long long ll;

using adj_list = pair<ll, ll>;
vector<ll> adj_mat[maxnum], sub_value, val;
vector<adj_list> thouse;

void dfs(ll current, ll lst=-1){
    for(auto x: adj_mat[current]){
        if(x==lst)
            continue;
        dfs(x, current);
    }
    thouse.clear();
    {
        for(auto x: adj_mat[current]){
            if(x != lst)
                thouse.emplace_back(sub_value[x], x);
        }
        sort(rbegin(thouse), rend(thouse));
        
        ll token = 1;
        for(auto [_val, id]:thouse)
            val[id] = token++;

        for(auto x:adj_mat[current])
            if(x!=lst)
                sub_value[current] += (val[x] * sub_value[x]);
    }
}

void solution()
{
    ll n, x;
    cin >> n >> x;
    sub_value.assign(n,1),val.assign(n,0);

    for(ll i=0; i<n; i++)
        vector<ll>().swap(adj_mat[i]);

    for(ll i=0; i<n-1; ++i){
        ll u,v;
        cin >> u >> v, --u, --v;
        adj_mat[u].emplace_back(v),adj_mat[v].emplace_back(u);
    }
    dfs(0);
    cout << sub_value[0]%mod*x%mod << "\n";
}

int32_t main(){
    //fast.io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
        solution();
    return 0;
}
