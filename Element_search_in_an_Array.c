#include<stdio.h>
int main(){
    int n,knumber,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&knumber);
    
    for(int i = 0;i<n;i++){
        if(knumber == arr[i]) c++;
    }
    
    if(c!=0){
        printf("True");
    }
    else printf("False");
    
}