#include<stdio.h>
int main()
{
    unsigned int n,i;
    scanf("%u",&n);
    for(i=1;i<=n;)
    {
        printf("%u ",i++);
    }
}