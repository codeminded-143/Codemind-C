#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,f;
    float per;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&f);
    per = ((a+b+c+d+f)*0.2);
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }else if(per>=70)
    {
        printf("Grade C");
    }else if(per>=60)
    {
        printf("Grade D");
    }else if(per>=40)
    {
        printf("Grade E");
    }else{
        printf("Grade F");
    }
}