#include<stdio.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(;n>0;n/=10){
        c++;
    }
    printf("%d",c);
}