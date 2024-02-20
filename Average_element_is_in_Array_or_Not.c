#include<stdio.h>
int main(){
    int n,sum = 0,i,c=0;
    float Avg;
    scanf("%d",&n);
    int A[n];
    for(i =0;i<n;i++){
        scanf("%d",&A[i]);
        sum = sum+A[i];
    }
       Avg = sum/n; 
       for(i = 0;i<n;i++){
       if(Avg==A[i]){
            printf("True");
            break;
       }c++;
        if(c==n){
            printf("False");
            break;
        }
       }
}