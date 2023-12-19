#include<stdio.h>
int main(){
    int n,i,j,ch;
    scanf("%d",&n);
    ch = 65+(n-1);
    for(i = 1;i<=n;i++){
       //ch = 65+(n-1);
       for(j = n;j>=i;j--){
           printf("%c ",ch);
       }printf("
");
       ch--;
    }
}