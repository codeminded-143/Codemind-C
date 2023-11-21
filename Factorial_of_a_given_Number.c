#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i = 1;n != 0;n--){
        i = i*n;
    }
    printf("%d",i);
}