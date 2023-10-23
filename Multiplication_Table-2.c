#include<stdio.h>
int main()
{
    int n,i,r,res;
    scanf("%d %d",&n,&r);
    for(i=1;i<=r;i++)
    {
        res = n*i;
        printf("%d x %d = %d
",n,i,res);
    }
}