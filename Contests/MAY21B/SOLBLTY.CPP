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
        ll X, A, B, res;
        cin >> X >> A >> B;
        res = A + (100-X)*B;
        cout << 10*res << "\n";
    }
    return 0;
}
