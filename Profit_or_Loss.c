#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>a)
    {
        printf("Profit");
    }
    else if(a==b)
    {
        printf("No Profit and No Loss");
    }else
    {
        printf("Loss");
    }
}