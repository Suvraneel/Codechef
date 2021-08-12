#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long int n;
        cin >> t;
        while(t--){
        cin >> n;
        if (n==0){
            cout << "0";
            break;
        }
        int visible_sum[4] = {20,36,51,60};
        int pattern = (n%4==0?4:n%4);   //12341234... instead of 12301230...
        long long int ans = 15*(4-pattern) + 11*(n-4) + visible_sum[pattern-1];
        cout << (n>4?ans:visible_sum[n-1])<< endl;
        }
    return 0;
}
