#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int d1, v1, d2, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    if (d1>d2){
        swap(d1,d2);
        swap(v1,v2);
    }
    int day=0;
    int count=0;
    while (count<p){
        day++;
        if (day<d2 && day>=d1)
        count += v1;
        else if (day>=d2)
        count += v1+v2;
    }
    cout << day;
    return 0;
    }
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
