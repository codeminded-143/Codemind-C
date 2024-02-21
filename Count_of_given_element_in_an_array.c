#include<stdio.h>
int main(){
    int n,numcut,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&numcut);
    
    for(int i = 0;i<n;i++){
        if(numcut == arr[i]) c++;
    }
    
    if(c!=0){
        printf("%d",c);
    }
    else printf("0");
    
}