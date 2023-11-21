#include<stdio.h>

int main()
{
    int n,rev = 0;
    
    scanf("%d",&n);
    
    while(n!=0){
        int n1 = n%10;
        rev = (rev*10)+n1;
        n = n/10;
    }
    printf("%d",rev);
}