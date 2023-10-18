#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        printf("weird");
    }
    else if(2 > n%2 == 0 <5 || n%2 == 0 && n > 20)
    {
        printf("not weird");    
    }else if(6 > n%2 ==0 <20 )
    {
        printf("weird");
    }
}