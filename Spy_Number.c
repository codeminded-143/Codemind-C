#include<stdio.h>

int main()
{
    int n,s=0,p =1,n1;
    scanf("%d",&n);
    while(n>0)
    {
       n1 = n%10;
       s=s+n1;
       p = p*n1;
       n = n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}