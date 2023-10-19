#include<stdio.h>
int main()
{
    char colour;
    scanf("%c",&colour);
    if(colour>='A' && colour<='Z')
    {
        if(colour=='V')
        {
            printf("Voilet");
        }
        else if(colour=='I')
        {
            printf("Indigo");
        }
        else if(colour=='B')
        {
            printf("Blue");
        }
        else if(colour=='G')
        {
            printf("Green");
        }
        else if(colour=='Y')
        {
            printf("Yellow");
        }
        else if(colour=='O')
        {
            printf("Orange");
        }
        else if(colour=='R')
        {
            printf("Red");
        }
        else
        {
            printf("-1");
        }
    }
}