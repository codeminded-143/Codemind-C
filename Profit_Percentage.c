#include<stdio.h>
int main()
{
    float X,Y;
    scanf("%d %d",&X,&Y);
    float prof = ((Y-X)/X)*100;
    printf("%.2f",prof);
}