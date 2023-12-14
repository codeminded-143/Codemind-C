#include<stdio.h>
int main()
{
    int a,b,big;
    scanf("%d %d",&a,&b);
    big = (a<b)?b:a;
    while(1){
        if(big%a==0 && big%b == 0){
            printf("%d",big);
            break;
        }++big;
    }
}