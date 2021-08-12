#include <bits/stdc++.h>
using namespace std;
  
// Function to return the count of elements
// from the array which are greater than k
// long long int countGreater(long long int arr[], long long int n, long long int k)
// {
//     long long int l = 0;
//     long long int r = n - 1;
  
//     // Stores the index of the left most element
//     // from the array which is greater than k
//     long long int leftGreater = n;
  
//     // Finds number of elements greater than k
//     while (l <= r) {
//         long long int m = l + (r - l) / 2;
  
//         // If mid element is greater than
//         // k update leftGreater and r
//         if (arr[m] >= k) {
//             leftGreater = m;
//             r = m - 1;
//         }
  
//         // If mid element is less than
//         //  k update l
//         else
//             l = m + 1;
//     }

//     // Return the count of elements greater than k
//     return (n - leftGreater);
// }
  
// A O(1) time function to compute sum of submatrix
// between (tli, tlj) and (rbi, rbj) using aux[][]
// which is built by the preprocess function
//sumquery

int main(){
    long long int n, m, k, t;
    cin>>t;
    while(t--){
    long long int count=0;
      cin >> n >> m >> k;
      long long int mat[n+1][m+1], aux[n+1][m+1], arr[n];
      for (long long int i = 0; i <= n; i++)
         mat[i][0] = 0;

      for (long long int i = 0; i <= m; i++)
         mat[0][i] = 0;
      
      for (long long int i = 1; i <= n; i++)
      {
         for (long long int j = 1; j <= m; j++)
         {
            cin >> mat[i][j];
         }
      }

   /* build auxiliary */
   // Function to preprcess input mat[M][N].  This function
   // mainly fills aux[M][N] such that aux[i][j] stores sum
   // of elements from (0,0) to (i,j)

   // Copy first row of mat[][] to aux[][]
   for (long long int i=0; i<= m; i++)
      aux[0][i] = mat[0][i];

   // Do column wise sum
   for (long long int i=1; i<= n; i++)
      for (long long int j=0; j<= m; j++)
         aux[i][j] = mat[i][j] + aux[i-1][j];

   // Do row wise sum
   for (long long int i=0; i<=n; i++)
      for (long long int j=1; j<=m; j++)
         aux[i][j] += aux[i][j-1];

//   for (long long int i=0; i<=n; i++)
//       {for (long long int j=0; j<=m; j++)
//          cout << aux[i][j] << "\t";
//          cout << endl;}

   // for (long long int row=1; row<= n; row++)
   // {
   //    /* extract each row for binary search */
   //    for (long long int i = 0; i <= m; i++)
   //    {
   //       arr[i] = mat[row][i];
   //    }
   //    count += countGreater(arr, m, k);
   //    cout << endl << count;
   // }

   for(long long int order=1;order<=n; order++){
   long long int r=n, c=m;
   // long long int i = order, j=order;
   // for (long long int order = 1; order <= n; order++){
      for(long long int i = order; i <= r && r!=0; i++){
      // while(i <= r){
         for (long long int j = order; j <= c && c!=0; j++){
         // while(j <= c){
            if((aux[i][j] - aux[i][j-order] - aux[i-order][j] + aux[i-order][j-order]) >= order*order*k){
               count += (r+1-i) * (c+1-j);
               c = j-1;
            //   cout << endl << i << ","<< j << endl;
               break;
            }
         }
      }
   }
   cout << count << endl;
}
   return 0;
}
