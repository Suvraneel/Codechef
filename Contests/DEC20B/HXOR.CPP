#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, I, J;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];                                             //accept input
            }

        int i=0;
        while (i<=n-2 && x!= 0){
            if (a[i]>=1 || i==n-2){
            I = i;
            int P = 32 - __builtin_clz(a[i]) - 1;
            int binpow= 1<<P;
            for (int j = i+1; j < n;){
                int temp = a[j] ^ binpow;
                if( temp < a[j]|| j==n-1) {
                    J = j;
                    a[J] = a[J] ^ binpow;
                    a[I] = a[I] ^ binpow;
                    x--;
                    break;
                    }
                else j++;
                }
            }
        if (a[i]==0)
        i++;
        }

        
        if (x!=0 && x%2==1 && n==2){
            I = n-2;
            J = n-1;
            a[J] = a[J] ^ 1;
            a[I] = a[I] ^ 1;
        }


    for (int i = 0; i < n; i++){
        cout << a[i];                                                //give output
        if (i!=n-1)     cout << " ";
        }
        cout << endl;                                                //end of test case
    }
    return 0;
}
