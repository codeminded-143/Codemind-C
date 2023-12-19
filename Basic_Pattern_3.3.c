#include<stdio.h>
int main(){
    int n,i,j,ch;
    scanf("%d",&n);
   
    for(i = 1;i<=n;i++){
        ch = 1;
        for(j = n;j>=i;j--){
            printf("%d ",ch);
            ch++;
        }printf("
");
        
    }
}