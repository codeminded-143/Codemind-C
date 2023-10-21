#include<stdio.h>

int main()
{
    float u_c,cpu,b,sc,TA;
    scanf("%f",&u_c);
    if(u_c<=199.00)
    {
        cpu = 1.20;
        b = u_c*cpu;
        sc = 100.00;
        TA = b+sc;
        printf("%.2f",TA);
    }
    else if(u_c>=200.00 &&u_c<400)
    {
        cpu=1.50;
        b=u_c*cpu;
        sc = 100.00;
        TA = b+sc;
        printf("%.2f",TA);
    }
    
    else if(u_c>=400.00 && u_c<600.00)
    {
        cpu = 1.80;
        b = u_c*cpu;
        sc = (b/400.00)*(15.0*4.0);
        TA = b+sc;
        printf("%.2f",TA);
    }
    else if(u_c>=600.00)
    {
        cpu =2.00;
        b = u_c*cpu;
        sc = (b/400.00)*(15.0*4.0);
        TA = b+sc;
        printf("%.2f",TA);
    }
}