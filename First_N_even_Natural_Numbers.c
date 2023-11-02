#include<stdio.h>

int main()
{
    int n,n1;
    scanf("%d",&n);
    n = n*2;
    printf("%d ",n);
    for(;n>2;){
        n-=2;
        printf("%d ",n);
    }
}