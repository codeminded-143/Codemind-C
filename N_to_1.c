#include<stdio.h>
int main()
{
    unsigned int n;
    scanf("%u",&n);
    for(;n>=1;)
    {
        printf("%u ",n--);
    }
}