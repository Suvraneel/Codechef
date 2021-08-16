#include<stdio.h>
typedef long long int ll;

int main()
{
    int maxNum = 4e6+5;
    int fn[maxNum], res[maxNum];
    for (int i = 0; i < maxNum; i++){
        fn[i] = i;
        res[i] = 0;
    }
    
    for (int i=2; i< maxNum; i++){
        if (fn[i]==i)
        {
            fn[i] = i-1;
            for (int j = 2*i; j < maxNum; j+=i)
            {
                fn[j] = (fn[j]/i)*(i-1);
            }
    
        }
        
    }
    for (int i = 1; i < maxNum; i++)
    {
        res[i] += i-1;
        for (int j = 2*i; j < maxNum; j+=i)
        {
            res[j] += i*((1+fn[j/i])/2);
        }
        
    }
    int t, k;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &k);
        printf("%d\n", res[4*k+1]);
    }
    return 0;
}
