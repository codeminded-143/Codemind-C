#include<stdio.h>

int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if(y>x)
    {
        printf("%.f",y-x);
    }
    else
    {
        printf("%.f",x-y);
    }
}