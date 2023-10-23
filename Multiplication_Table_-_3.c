#include<stdio.h>
int main()
{
    int n,i,r,res;
    scanf("%d %d %d",&n,&i,&r);
    for(;i<=r;i++)
    {
        res = n*i;
        printf("%d x %d = %d
",n,i,res);
    }
}