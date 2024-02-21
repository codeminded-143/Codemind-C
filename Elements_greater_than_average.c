#include<stdio.h>
int main(){
    int n,c = 0,avg = 0;
    scanf("%d",&n);
    int A[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&A[i]);
        avg = avg+A[i];
    }
     
     avg = avg/n;
     
     for(int i = 0;i<n;i++){
         if(A[i]>=avg) c++;
     }
     
     if(c!=0) printf("%d",c);
     else printf("0");
    
}