#include<stdio.h>
#include<math.h>

int main(){
    int n,sum = 0,diff =0;
    scanf("%d",&n);
    int A[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&A[i]);
    }
    
    for(int i = 0;i<n;i++){
        if(i%2 == 0) sum = sum +A[i];
        else diff = diff+A[i];
    }
    
    printf("%d",abs(sum - diff));
}
