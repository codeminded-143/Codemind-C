#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        for(j = 1;j<=n;j++){
            if(i%2 == 0){
                k = 1;
                printf("%d ",k);
            }
            else{
                k = 0;
                printf("%d ",k);
            }
        }printf("
");
    }
}