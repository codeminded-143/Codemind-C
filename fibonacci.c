#include<stdio.h>

int main()

{
    int i,a = 0,b=1,c,n;
    scanf("%d",&n);
    c = a+b;
    printf("%d %d %d ",a,b,c);
    for(i=3;i<n;i++){
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
    }
}