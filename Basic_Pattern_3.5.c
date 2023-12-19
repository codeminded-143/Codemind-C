#include<stdio.h>
int main(){
    int n,i,j,ch,j1;
    scanf("%d",&n);
   
    for(i = 1;i<=n;i++){
        ch = 65;
        for(j = n;j>=i;j--){
            printf("%c ",ch);
            ch++;
        }printf("
");
        
    }
}