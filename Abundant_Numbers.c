#include<stdio.h>
int main(){
    int a,i,res =0;
    scanf("%d",&a);
    for(i = 1;i<a;i++){
        if(a%i == 0){
            res = res+i;
        }
    }if(res > a){
        printf("True");
    }else{
        printf("False");
    }
}