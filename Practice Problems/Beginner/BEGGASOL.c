#include <stdio.h>

int main() {
    int i, t,n, dist;
    scanf("%d", &t);
	while (t--){
        scanf("%d", &n);
        int gas[n];
        for (i=0 ; i<n ; i++ ){
            scanf("%d", &gas[i]);
        }
        int g = gas[0];
        gas[0] = 0;
        int count = 0;
        int posn=1;
        while( g--){
            
            count ++;
            g += gas[posn];
            gas[posn] = 0;
            posn++;
            if (posn == n) posn=1;
        }
        dist = count;
        printf("%d\n", dist);
}
	return 0;
}

