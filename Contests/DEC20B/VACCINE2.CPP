#include <iostream>
using namespace std;

int patients(int p, int d){
    int c=0;
    while (p>0){
        p -= d;
        c++;
    }
    return c;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int p,n,d;
        cin >> n >> d;
        int a[n];
        int count =0, Risk =0, noRisk =0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++){
            if (a[i]<=9 || a[i]>=80)
              Risk ++;
            else noRisk ++;
        }
        count += patients(Risk, d);
        count += patients(noRisk, d);
        cout << count << endl;
    }

return 0;
}