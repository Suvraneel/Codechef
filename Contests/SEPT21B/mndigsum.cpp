#include <bits/stdc++.h>
using namespace std;
typedef long int ll;
#define T int tt; cin >> tt; while(tt--)
#define infLoop while(true)
#define fora(i, a, n) for(ll i = a; i < n; i++)
const int M = 1e9+7;

void fastio(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

int main() {
    fastio();
    T {
        ll n, l, r, init_n, sum, ans, sum_test;
        cin >> n >> l >> r;
        if (n >= l && n <= r) {
            cout << n << endl;
            continue;
        }        
        if (n < l) {
            cout << l << endl;
            continue;
        }
        sum_test = INT_MAX;
        ans = 0;
        while (l < r && n / r < r) {
            ll quotient = n / r, remainder = n % r;
            ll temp = quotient + remainder;
            if (sum_test > temp) {
                sum_test = temp;
                ans = r;
            }
            r = n / (quotient + 1);
        }
        while (l <= r) {
            init_n = n;
            sum = 0;
            infLoop {
                if (init_n < l) {
                    sum += init_n;
                    if (sum < sum_test) {
                        ans = l;
                        sum_test = sum;
                    }
                    break;
                }
                sum += init_n % l;
                init_n /= l;
                if (sum >= sum_test)
                    break;
            }
            l++;
        }
       cout << ans << endl;
    }
    return 0;
}
