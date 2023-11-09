#include<stdio.h>

int main()
{
    int n,a = 0,b = 1,c;
    
    scanf("%d",&n);// 5
    
    c = a+b;// 0+1 = 1
    
    while(c<n){
        
        a = b; // 1 
        b = c; // 1 , 2
        c = a+b;// 2 , 3
    }
    if(c == n){
        printf("True");
    }else{
        printf("False");
    }
}