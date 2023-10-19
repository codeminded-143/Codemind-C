#include<stdio.h>
#include<math.h>

int main()
{
    float basic;
    float gross;
    float da;
    float hra;
    scanf("%f",&basic);
    if(basic<=10000)
    {
        da = basic*0.80;
        hra = basic*0.20;
        gross = basic+da+hra;
        printf("%.2f",gross);
    }
    else if(basic<=20000)
    {
        da = basic*0.90;
        hra =basic*0.25;
        gross = basic+da+hra;
        printf("%.2f",gross);
    }
    else if(basic>20000)
    {
        da = basic*0.95;
        hra = basic*0.3;
        gross = basic+da+hra;
        printf("%.2f",gross);
    }
}