#include<stdio.h>

int main()
{
    int a,b,sum =0,sum2=0,i,j;
    scanf("%d %d",&a,&b);
    for(i = 1;i<a;i++){
        if(a%i==0){
            sum = sum+i;
        }
    }for(j = 1;j<b;j++){
        if(b%j==0){
            sum2 = sum2+j;
        }
    }if(sum == b && sum2 == a){
        printf("Amicable");
    }else{
        printf("Not Amicable");
    }
}