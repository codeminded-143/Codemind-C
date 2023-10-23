#include<stdio.h>

int main()
{
    int n,r,i;
    scanf("%d %d",&i,&n);
    //i1=i;
    r=i+1;
    for(;r<n;++r)
    {
        //if(i!=2)
        printf("%d %d %d
",r,(r*r),(r*r*r));
    }
}