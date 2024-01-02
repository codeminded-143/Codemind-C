#include<stdio.h>
#define p printf
int main(){
    int n,o = 0,e = 0,n1;
    scanf("%d",&n);
    while(n!=0){
        n1 = n%10;
        if(n1%2 == 0)e++;
        else o++;
        n/=10;
    }
    if(e!=0 && o!=0){
        p("Mixed");
    }else if(e!=0){
        p("Even");
    }else{
        p("Odd");
    }
}