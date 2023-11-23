#include<stdio.h>
int main()
{
    int n,i,res,n1,rev = 0;
    scanf("%d",&n);
    i=n;
    res = n*n;
    for(res;res!=0;res/=10){
        n1 = res%10;
        rev= rev+n1;
    }if(i == rev ){
        printf("Neon Number");
    }else{
        printf("Not Neon Number");
    }
}