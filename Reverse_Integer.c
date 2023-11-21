#include<stdio.h>

int rev_num(int n,int rev){
    while(n!=0){
    int n1 = n%10;
    rev = (rev*10)+n1;
    n/=10;
    }
    return rev;
}

int main()
{
    int n,rev = 0;
    scanf("%d",&n);
    
    printf("%d",rev_num(n,rev));
}