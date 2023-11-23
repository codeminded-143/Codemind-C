#include<stdio.h>
int main()
{
    int n,n1,n2,n3,rev = 0;
    scanf("%d",&n);
   
    n1 =n%10;
    
    for(n;n!=0;n/=10){
        n2 = n%10;
        rev = (rev*10)+n2;
    }
    n3 = rev%10;
     printf("%d",n1+n3);
   
}