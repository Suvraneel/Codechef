#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--){
        //fast.io
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll N, x, k, curr = 0;
        bool goal = false;
        cin >> N >> x >> k;
        if (x%k==0 || (N+1-x)%k==0)
            goal = true;
            
        cout << (goal==true?"YES":"NO") << "\n";
    }
    return 0;
}
