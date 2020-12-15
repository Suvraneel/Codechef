#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            a[i] = -(i+1);
        }
        int sum = 0;
        for (int i = 0; i < n-1 && k!=0; i++){
            if (abs(a[i])+sum>0 && sum+abs(a[i])<abs(a[i+1])){
            a[i] = abs(a[i]);
            k--;
            }
            sum += a[i];
        }

        for (int i = n-1; i >= 0 && k!=0; i--){
            if(a[i]<0){
            a[i] = abs(a[i]);
            k--;
            }
        }
        
        for (int i = 0; i < n; i++){
        cout << a[i];
        if (i!=n-1)     cout << " ";
        }
    cout << endl;
    }
return 0;
}