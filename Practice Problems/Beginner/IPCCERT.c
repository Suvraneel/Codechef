#include <stdio.h>

int main() {
    int n, m, k, i, j;
    int count = 0;
	scanf("%d %d %d", &n, &m, &k);
    int t[n][k], q[n], time[i];
	for (i = 0; i < n; i++)
    {
        time[i] = 0;
        for (j = 0; j < k; j++)
        {   
            scanf("%d", &t[i][j]);
            time[i] += t[i][j];
        }
        scanf("%d", &q[i]);
        if (time[i] >= m && q[i] <= 10)
        count++;
    }
    printf("%d", count);
    return 0;
}