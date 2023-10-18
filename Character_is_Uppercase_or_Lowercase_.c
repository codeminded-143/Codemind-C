#include<stdio.h>
int main()
{
    char alp;
    scanf("%c",&alp);
    if(alp>='A' && alp<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(alp>='a' && alp <='z')
    {
        printf("lowercase alphabet");
    }
    else if(alp>=1)
    {
        printf("not an alphabet");
    }
}