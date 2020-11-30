/*https://cses.fi/problemset/task/1091/ */

#include <stdio.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  

int main() {
    int n, m, i, j;
    int sold = -1;
	scanf("%d %d", &n, &m);
    int h[n], t[n];
    for (j = 0; j < n; j++)
    {
        scanf("%d", &h[j]);
    }
        for (i = 0; i < m; i++)
    {
        scanf("%d", &t[i]);
    }
    bubbleSort(h, n);

    for ( i = 0; i < m; i++)
    {
        for ( j = n-1; j >= 0; j--)
        {
            if (t[i]>=h[j])
            {   
                sold = h[j];
                h[j] = 99999;
                goto next;
            }
        
        }
        next:
        printf("%d\n", sold);
        sold = -1;
    }
    
    
	return 0;   
}













/*
Problem:

Concert Tickets
There are n concert tickets available, each with a certain price. Then, m customers arrive, one after another.

Each customer announces the maximum price he or she is willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.

Input

The first input line contains integers n and m: the number of tickets and the number of customers.

The next line contains n integers h1,h2,…,hn: the price of each ticket.

The last line contains m integers t1,t2,…,tm: the maximum price for each customer.

Output

Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.

If a customer cannot get any ticket, print −1.

Constraints

    1≤n,m≤2⋅105


1≤hi,ti≤109


Example

Input:
5 3
5 3 7 8 5
4 8 3

Output:
3
8
-1*/
