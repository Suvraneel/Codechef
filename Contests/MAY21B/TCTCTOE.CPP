#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        short int grid[3][3];
        ll  numOfX=0, numOfY=0, summation[8] = {0,0,0,0,0,0,0,0};
        bool completion = true, winX=false, winO=false;
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {   
                char ch;
                cin >> ch;
                if (ch == '_'){
                    grid[i][j] = -4;
                    completion = false;
                }
                else if (ch == 'X'){
                    grid[i][j] = 1;
                    numOfX++;
                }
                else if (ch == 'O'){
                    grid[i][j] = 0;
                    numOfY++;
                }
            }
        }
        
        for (ll i = 0; i < 3; i++)
            for (ll j = 0; j < 3; j++)
                summation[i] += grid[i][j];

        for (ll i = 0; i <= 2; i++)
            for (ll j = 0; j <= 2; j++)
                summation[i+3] = summation[i+3] + grid[j][i];


        summation[6] = grid[0][0] + grid[1][1] + grid[2][2];
        summation[7] = grid[0][2] + grid[1][1] + grid[2][0];

        for (ll i=0; i<=7; i++){
            if (summation[i] == 0)
                winO = true;
            else if (summation[i] == 3)
                winX = true;
        }

        if (!(winX == true && winO == true) && (numOfX-numOfY==0 || numOfX-numOfY==1)){
            if (winX == true && winO == false && numOfX == numOfY+1)
                cout << "1" << endl;
            else if (winX == false && winO == false){
                if (completion==true)
                    cout << "1" << endl;
                else cout << "2" << endl;
            }
            else if  ((winX == true && winO == false && numOfX!=numOfY+1) || (winO == true && winX == false && numOfX!=numOfY))
                cout << "3" << endl;
            else if (winO == true && winX == false && numOfX==numOfY)
                cout << "1" << endl;
        }
        else cout << "3" << endl;
    }
    return 0;
}
