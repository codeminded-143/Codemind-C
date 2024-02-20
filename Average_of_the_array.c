#include<stdio.h>
int main(){
    int n;
    float sum = 0;
    int c = 0;
    scanf("%d",&n);
    int A[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&A[i]);
        sum = sum + A[i];
        c++;
    }
    
    printf("%.2f",sum/c);
}