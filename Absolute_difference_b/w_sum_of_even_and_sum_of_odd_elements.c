#include<stdio.h>
#include<math.h>
int main(){
    int n,sum = 0,dif = 0;
    scanf("%d",&n);
    int A[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&A[i]);
    }
    
    for(int i = 0;i<n;i++){
        if(A[i]%2 == 0) sum = sum + A[i];
        else dif = dif + A[i];
    }
    
    printf("%d",abs(sum - dif));
}