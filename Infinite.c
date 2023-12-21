#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n != 0){
        if(n != -1) 
        printf("%d
",n*n);
        else 
        break;
        scanf("%d",&n);
    }
}