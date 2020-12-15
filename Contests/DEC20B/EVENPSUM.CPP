#include <iostream>
using namespace std;

int countOdd(int R){  
    long int N = (R%2==1?(R+1)/2:R/2);
    return N; 
} 

int main(){
    int t,aodd,aeven,bodd,beven;
    cin >> t;
    while(t--){
        long int a,b;
        cin >> a >> b;
        long int oddsa = countOdd(a);  
        long int evensa = a - oddsa;  
        
        long int oddsb = countOdd(b);  
        long int evensb = b - oddsb;  
    
        long long int count = oddsa*oddsb + evensa*evensb;
        cout << count << endl;
    }
    return 0;
}