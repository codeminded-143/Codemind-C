#include<stdio.h>
int main()
{
    int n,i,sum = 0,diff,su1 = 0,sqr;
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        su1 = su1 +i;
        sqr = i*i;
        sum = sum+sqr;
    }su1 = su1*su1;
    diff = su1 - sum;
    printf("%d",diff);
}